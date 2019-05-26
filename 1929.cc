#include <cstdio>

int X[1000001];
int M, N;
int main() {
  X[1] = 1;
  for(int i = 2; i <1000; i++) {
    if(X[i]) continue;
    for(int j = i*i; j <= 1000000; j+=i) {
      X[j]++;
    }
  }
  scanf("%d %d",&M,&N);
  for(int i = M; i <= N; i++) {
    if(!X[i])printf("%d\n",i);
  }
  return 0;
}

