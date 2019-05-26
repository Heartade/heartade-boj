#include <cstdio>

#define MAX 10001

int X[MAX];
int PRIME[MAX];
int Y[2*MAX];
int M, N;
int main() {
  X[1] = 1;
  for(int i = 2; i <= 100; i++) {
    if(X[i]) continue;
    for(int j = i*i; j < MAX; j+=i) {
      X[j]++;
    }
  }
  int n = 0; // NUM OF PRIMES
  for(int i = 0; i < MAX; i++) {
    if(!X[i]) PRIME[n++] = i;
  }
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      M = PRIME[i]+PRIME[j];
      if (M - 2*Y[M] > PRIME[j] - PRIME[i]) Y[M] = PRIME[i];
    }
  }
  scanf("%d",&N);
  for(int i = 0; i < N; i++) {
    scanf("%d",&M);
    printf("%d %d\n", Y[M], M-Y[M]);
  }
}
