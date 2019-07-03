#include <cstdio>
int F[1000001];
int N;
int main() {
  F[1] = 1;
  F[2] = 2;
  for(int i = 3; i <= 1000000; i++) {
    F[i] = (F[i-1]+F[i-2])%15746;
  }
  scanf("%d",&N);
  printf("%d\n",F[N]);
  return 0;
}
