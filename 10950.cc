#include <cstdio>
int A, B, N;
int main() {
  scanf("%d",&N);
  for(int i = 0; i < N; i++) {
    scanf("%d%d",&A,&B);
    printf("%d\n",A+B);
  }
  return 0;
}
