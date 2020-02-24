#include <bits/stdc++.h>

using namespace std;

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,tune=native")
#pragma GCC optimize("O2,unroll-loops")

#define ELEMENTSIZE 4

inline uint64_t Swap64(uint64_t x) { return __builtin_bswap64(x); }

inline uint32_t Swap32(uint32_t x) { return __builtin_bswap32(x); }

inline uint16_t Swap16(uint16_t x) { return __builtin_bswap16(x); }

template <size_t ElementSize>
inline void qReverse(void* Array, size_t l, size_t r) {
    size_t Count = r - l + 1;
    struct ByteElement {
        uint8_t u8[ElementSize];
    };
    ByteElement* ArrayN = reinterpret_cast<ByteElement*>(Array);
    static_assert(
        sizeof(ByteElement) == ElementSize,
        "ByteElement is pad-aligned and does not match specified element size");
    for (; l < l + Count / 2; ++l) {
        ByteElement Temp(ArrayN[l]);
        ArrayN[l] = ArrayN[Count - l - 1];
        ArrayN[Count - l - 1] = Temp;
    }
}

template <>
inline void qReverse<4>(void* Array, size_t l, size_t r) {
    size_t Count = r - l + 1;
    uint32_t* Array32 = reinterpret_cast<uint32_t*>(Array);
    size_t i = 0;
#if defined(__AVX2__)
    for (std::size_t j = i / 8; j < ((Count / 2) / 8); ++j) {
        __m256i Lower =
            _mm256_loadu_si256(reinterpret_cast<__m256i*>(&Array32[l + i]));
        __m256i Upper = _mm256_loadu_si256(
            reinterpret_cast<__m256i*>(&Array32[l + Count - i - 8]));
        Lower = _mm256_shuffle_epi32(Lower, _MM_SHUFFLE(0, 1, 2, 3));
        Upper = _mm256_shuffle_epi32(Upper, _MM_SHUFFLE(0, 1, 2, 3));
        Lower = _mm256_permute2x128_si256(Lower, Lower, 1);
        Upper = _mm256_permute2x128_si256(Upper, Upper, 1);
        _mm256_storeu_si256(reinterpret_cast<__m256i*>(&Array32[l + i]), Upper);
        _mm256_storeu_si256(
            reinterpret_cast<__m256i*>(&Array32[l + Count - i - 8]), Lower);
        i += 8;
    }
#endif
#if defined(__SSSE3__)
    for (size_t j = i / 4; j < ((Count / 2) / 4); ++j) {
        __m128i Lower =
            _mm_loadu_si128(reinterpret_cast<__m128i*>(&Array32[i]));
        __m128i Upper = _mm_loadu_si128(
            reinterpret_cast<__m128i*>(&Array32[l + Count - i - 4]));
        Lower = _mm_shuffle_epi32(Lower, _MM_SHUFFLE(0, 1, 2, 3));
        Upper = _mm_shuffle_epi32(Upper, _MM_SHUFFLE(0, 1, 2, 3));
        _mm_storeu_si128(reinterpret_cast<__m128i*>(&Array32[l + i]), Upper);
        _mm_storeu_si128(
            reinterpret_cast<__m128i*>(&Array32[l + Count - i - 4]), Lower);
        i += 4;
    }
#endif
    for (; i < Count / 2; ++i) {
        uint32_t Temp(Array32[l + i]);
        Array32[l + i] = Array32[l + Count - i - 1];
        Array32[l + Count - i - 1] = Temp;
    }
}

int main() {
    ifstream in("swap.in");
    ofstream out("swap.out");
    int n, m, k;
    in >> n >> m >> k;
    vector<int> start(n), end(n);
    iota(start.begin(), start.end(), 1);
    vector<pair<int, int> > a(m);
    for (auto& i : a) {
        in >> i.first >> i.second;
        i.first--;
    }
    int num = 0;
    end = start;
    do {
        for (int i = 0; i < m; i++) {
            qReverse<ELEMENTSIZE>(end.data(), a[i].first, a[i].second - 1);
        }
        num++;
    } while (start != end && num < k);
    if (k % num != 0) {
        for (int j = 0; j < k % num; j++) {
            for (int i = 0; i < m; i++) {
                reverse(end.begin() + a[i].first, end.begin() + a[i].second);
            }
        }
    }
    for (auto i : end) {
        out << i << endl;
    }
    return 0;
}