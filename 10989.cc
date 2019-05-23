#define N 10002
#include <cstdio>
int i, m, n[N];
int main() {
  scanf("%d",&i);
  for(;i--;){
    scanf("%d",&m);
    n[m]++;
  }
  for(i = 0; i < N; i++){
    for(int j=0; j < n[i]; j++) {
      printf("%d\n",i);
    }
  }
}
