#include <cstdio>
int N,M,S,X;
int A[101];
int main() {
  scanf("%d %d",&N,&M);
  for(int i = 0; i < N; i++) {
    scanf("%d",A+i);
  }
  for(int i = 0; i < N; i++) {
    for(int j = i+1; j < N; j++) {
      for(int k = j+1; k < N; k++) {
        X = A[i]+A[j]+A[k];
        if(S<X && X<=M) {
          S = X;
        }
      }
    }
  }
  printf("%d\n",S);
  return 0;
}
