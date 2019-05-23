#define MAX 4001
#include <cstdio>
typedef long long int lld;
lld mean;
int median = -MAX;
int min = MAX;
int mode = -MAX;
int max = -MAX;
int N[2*MAX];
int cnt, in;
int resetMode;
int main() {
  scanf("%d",&cnt);
  for(int i = 0; i < cnt; i++) {
    scanf("%d",&in);
    N[in+MAX]++;
    if(in<min) min=in;
    if(in>max) max=in;
    mean+=in;
  }
  for(int j = 0; j <= cnt/2;) {
    median++;
    j += N[median+MAX];
  }
  for(int i = -MAX; i < MAX; i++) {
    if(N[mode+MAX]==N[i+MAX] && resetMode == 0) {
      mode = i;
      resetMode++;
    }
    else if(N[mode+MAX]<N[i+MAX]) {
      mode=i;
      resetMode = 0;
    }
  }
  printf("%d\n",mean);
  if (mean < 0) mean -= (cnt/2);
  else if (mean > 0) mean += (cnt/2);
  mean /= cnt;
  printf("%lld\n%d\n%d\n%d\n",mean,median,mode,max-min);
}
  
