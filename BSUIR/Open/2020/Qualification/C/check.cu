#include <fstream>

using namespace std;

__global__
void check(int n, long long *res){
    int index = blockIdx.x * blockDim.x + threadIdx.x;
    int stride = blockDim.x * gridDim.x;
    for(int cur=index;cur<=n;cur+=stride){
        unsigned int s=cur;
        long long steps=1;
        do{
            s = (s * 1103515245 + 12345);
            steps++;
        }while(s!=cur);
        res[cur]=steps;
        if(cur%10000==0){
            printf("Completed %d\n", cur);
        }
    }
}

int main(){
    int n = 1e5;
    long long *res=new long long(n+1);
    int blockSize = 256;
    int numBlocks = (n + blockSize - 1) / blockSize;
    cudaMallocManaged(&res, (n+1)*sizeof(long long));
    check<<<numBlocks, blockSize>>>(n, res);
    cudaDeviceSynchronize();
    ofstream out("output.txt");
    for(int i=0;i<=n;i++){
        out<<i<<" cycle: "<<res[i]<<"\n";
    }
    cudaFree(res);
    return 0;
}