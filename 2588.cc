#include <cstdio>
int A,B;
int main() {
  scanf("%d%d",&A,&B);
  printf("%d\n%d\n%d\n%d\n",A*(B%10),A*((B/10)%10),A*(B/100),A*B);
  return 0;
}
