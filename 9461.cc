#include <cstdio>
#define MAX_NUM 105

long long int A[MAX_NUM];
int main() {
  A[1] = 1;
  A[2] = 1;
  A[3] = 1;
  A[4] = 2;
  A[5] = 2;
  for(int i = 6; i < MAX_NUM; i++) {
    A[i] = A[i-1]+A[i-5];
  }
  int T, M;
  scanf("%d",&T);
  for(int i = 0; i < T; i++) {
    scanf("%d",&M);
    printf("%lld\n",A[M]);
  }
  return 0;
}
