#include <cstdio>

bool isPrime(int n) {
  if(n==1) return false;
  for(int i = 2; i <= n/2; i++) {
    if(!(n%i)) return false;
  }
  return true;
}

int M, N, ret, min;
int main() {
  scanf("%d %d",&M,&N);
  for(int i = M; i <= N; i++) {
    if(isPrime(i)) {
      if(!min) min=i;
      ret+=i;
    }
  }
  if(min==0) printf("-1\n");
  else printf("%d\n%d\n",ret,min);
  return 0;
}
