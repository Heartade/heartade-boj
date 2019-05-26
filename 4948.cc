#include <cstdio>

#define MAX 246913
int X[MAX];
int M, N;
int main() {
  X[1] = 1;
  for(int i = 2; i <500; i++) {
    if(X[i]) continue;
    for(int j = i*i; j < MAX; j+=i) {
      X[j]++;
    }
  }
  while(true) {
    scanf("%d",&M);
    if(!M) break;
    N = 0;
    for(int i = M+1; i <= 2*M; i++) {
      if(!X[i]) N++;
    }
    printf("%d\n",N);
  }
  return 0;
}

