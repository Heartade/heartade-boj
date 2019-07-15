#include <cstdio>
int H,M;
int main() {
  scanf("%d%d",&H,&M);
  if(M<45) {
    printf("%d %d",(H+23)%24,M+15);
  } else {
    printf("%d %d",H,M-45);
  }
  return 0;
}
