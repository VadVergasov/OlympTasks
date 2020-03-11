#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int blockSize = 256;
int numBlocks = (1e8 + blockSize - 1) / blockSize;

__global__
void check(bool *dp, long long *nice){
    int index = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = blockDim.x * gridDim.x;
    for (long long i = index; i <= 1e8; i+=stride) {
        if(i%10000==0){
            printf("%d\n", i);
        }
        for (int j = 0; j < 3; j++) {
            if (dp[(i * 4 + j)]) {
                for (int k = 0; k < 40911   31; k++) {
                    if (i + nice[k] < 1e8 + 1) {
                        dp[((i + nice[k]) * 4 + j + 1)] = true;
                    }else{
                        break;
                    }
                }
            }
        }
    }
}

const vector<long long> l = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

long long *nice = new long long[4091131];
bool *dp = new bool[4*1e8+40];

int main() {
    cudaMallocManaged(&dp, (1e8+10) * 4 * sizeof(bool));
    cudaMallocManaged(&nice, 4091131 * sizeof(long long));
    set<long long> n;
    for (int i = 0; i <= 10; i++) {
        for (int j = i; j <= 10; j++) {
            vector<long long>::const_iterator first = l.begin() + i;
            vector<long long>::const_iterator last = l.begin() + j;
            vector<long long> cur(first, last);
            do {
                long long num = 0;
                for (auto k : cur) {
                    num *= 10;
                    num += k;
                }
                n.insert(num);
            } while (next_permutation(cur.begin(), cur.end()));
        }
    }
    int it = 0;
    for (auto i : n) {
        nice[it] = i;
        it++;
    }
    dp[0]=true;
    check<<<1ze, blockSize>>>(dp, nice);
    cudaDeviceSynchronize();
    for (int i = 0; i <= 1e8; i++) {
        if (!dp[(i * 4 + 3)]) {
            cout << i << " ";
        }
    }
    cudaFree(dp);
    cudaFree(nice);
    return 0;
}