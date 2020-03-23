#include <iostream>

using namespace std;

__global__ void check(long long to) {
    long long index = blockIdx.x * blockDim.x + threadIdx.x;
    long long stride = blockDim.x * gridDim.x;
    for (long long j = index; j < to; j += stride) {
        long long n = to-j;
        char *ans = "", *ans1 = "";
        bool can = 0;
        for (long long a = 2; a < n; ++a) {
            bool tf = 1;
            if (((a | n) == n && (a & n) == a)) {
                long long rest = n ^ a;
                if (rest == 1 && __popcll(a) > 1) {
                    rest += (a & -a);
                }
                if (rest < n && rest > 1 && a < n && ((rest | a) == n)) {
                    tf = 0, can = 1;
                    ans = "No";
                    break;
                }
            }
            if (!tf) {
                break;
            }
        }
        if (!can) {
            ans = "Yes";
        }
        if ((n & 1) && __popcll(n) <= 2) {
            ans1 = "Yes";
        } else if (__popcll(n) == 1) {
            ans1 = "Yes";
        } else {
            ans1 = "No";
        }
        if (n % 10000000 == 0) {
            printf("Completed for %llu\n", n);
        }
        if (ans != ans1) {
            printf("ERROR %llu\n", n);
            return;
        }
    }
}

int main() {
    long long to = 1e18;
    long long blockSize = 256;
    long long numBlocks = (to + blockSize - 1) / blockSize;
    check<<<1, blockSize>>>(to);
    cudaDeviceSynchronize();
}
