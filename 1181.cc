#include <cstdio>
#include <cstring>
#include <algorithm>
#define N 20000

char  all_strings[N][51];
char* sorted[51][N];
int   num_per_len[51];

int n, m;

using namespace std;

bool lexico(const char* a, const char* b) {
  int i = 0;
  for(i = 0; i < 51; i++) {
    if(a[i]<b[i]) return true;
    if(a[i]>b[i]) return false;
  }
  if(a[i]>b[i]) return false;
}

int main() {
  scanf("%d",&n);
  for(int i = 0; i < n; i++) {
    scanf("%s",all_strings[i]);
    m = strlen(all_strings[i]);
    sorted[m][num_per_len[m]] = all_strings[i];
    num_per_len[m]++;
  }
  for(int i = 0; i < 51; i++) {
    sort(sorted[i],sorted[i]+num_per_len[i],lexico);
  }
  for(int i = 0; i < 51; i++) {
    for(int j = 0; j < num_per_len[i]; j++) {
      if(j>0 && !strcmp(sorted[i][j],sorted[i][j-1])) continue;
      printf("%s\n",sorted[i][j]);
    }
  }
}
