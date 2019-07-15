#include <cstdio>
int A, B, N;
int main() {
  scanf("%d",&N);
  for(int i = 0; i < N; i++) {
    scanf("%d%d",&A,&B);
    printf("%s%d%s%d%s%d%s%d\n","Case #",i+1,": ",A," + ",B," = ",A+B);
  }
  return 0;
}
