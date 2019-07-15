#include <cstdio>
int A, B;
int main() {
  do {
    scanf("%d%d",&A,&B);
    if(A+B>0) printf("%d\n",A+B);
  } while(A+B>0);
  return 0;
}
