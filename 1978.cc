#include <cstdio>

int n;
int m;
int ret;
int main() {
  scanf("%d",&n);
  for(int i = 0; i < n; i++) {
    scanf("%d",&m);
    if(m>1) ret++;
    for(int j = 2; j < m; j++) {
      if(!(m%j)) {
        ret--;
        break;
      }
    }
  }
  printf("%d\n",ret);
  return 0;
}
  
  
