#include <cstdio>
int A,B;
int main() {
  scanf("%d%d",&A,&B);
  printf("%s",A<B?"<":A>B?">":"==");
  return 0;
}
