#include <cstdio>
int N, i;
int get(int x) {
  int ret = x;
  while(x>0) {
    ret += x%10;
    x/=10;
  }
  return ret;
}
int main() {
  scanf("%d",&N);
  while(i<N) {
    i++;
    if(get(i)==N) break;
  }
  if(get(i)==N)  printf("%d\n",i);
  else printf("0\n");
  return 0;
}
