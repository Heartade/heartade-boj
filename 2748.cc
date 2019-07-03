#include <cstdio>
unsigned long long int F[91];
int N;
int main() {
  F[0] = 0;
  F[1] = 1;
  for(int i = 2; i <= 90; i++) {
    F[i] = F[i-1]+F[i-2];
  }
  scanf("%d",&N);
  printf("%lld\n",F[N]);
  return 0;
}
