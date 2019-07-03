#include <cstdio>
int N;
int X[51];
int Y[51];
int main() {
  scanf("%d",&N);
  for(int i = 0; i < N; i++) {
    scanf("%d %d",&X[i],&Y[i]);
  }
  for(int i = 0; i < N; i++) {
    int temp = 1;
    for(int j = 0; j < N; j++) {
      if(X[i]<X[j]&&Y[i]<Y[j]) temp++;
    }
    printf("%d ",temp);
  }
  return 0;
}
