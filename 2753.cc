#include <cstdio>
int N;
int main() {
  scanf("%d",&N);
  printf("%d",((!(N%4))&&(N%100))||(!(N%400))?1:0);
  return 0;
}
