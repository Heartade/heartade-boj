#include <cstdio>

int N, K;
int num_o_price[11];
int used_coins;

int main() {
  scanf("%d%d",&N,&K);
  for(int i = 0; i < N; i++) {
    scanf("%d",&num_o_price[i]);
  }
  for(int i = N-1; i >= 0; i--) {
    used_coins += K/num_o_price[i];
    K = K%num_o_price[i];
  }
  printf("%d",used_coins);
  return 0;
}
