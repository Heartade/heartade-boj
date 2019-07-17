#include <cstdio>
#include <cmath>

int num_N;
int arr_N[1001];

int max_M = 0;
//STORING DIVISORS OF max_M
int arr_M1[100002];
int arr_M2[100002];
int num_M = 0;
int sqrt_flag = 1;

int gcd(int a, int b) {
  if(a==0) return b;
  if(b==0) return a;
  if(a>b) return gcd(a%b, b);
  return gcd(a, b%a);
}

void get_d(int n) {
  int i;
  for(i = 1; i*i <= n; i++) {
    if(n%i==0) {
      arr_M1[num_M] = i;
      arr_M2[num_M] = n/i;
      num_M++;
    }
  }
  if((i-1)*(i-1)==n) sqrt_flag++;
}

int main() {
  scanf("%d",&num_N);
  for(int i = 0; i < num_N; i++) {
    scanf("%d",arr_N+i);
  }
  for(int i = 1; i < num_N; i++) {
    arr_N[i-1] = abs(arr_N[i-1]-arr_N[i]);
  }
  max_M = arr_N[0];
  num_N--;
  for(int i = 1; i < num_N; i++) {
    max_M = gcd(arr_N[i], max_M);
  }
  get_d(max_M);
  for(int i = 1; i < num_M; i++) {
    printf("%d ",arr_M1[i]);
  }
  for(int i = sqrt_flag; i <= num_M; i++) {
    printf("%d ",arr_M2[num_M-i]);
  }
  return 0;
}

