#include <cstdio>

int arr[50];
bool op[50];
int len_arr;
char c;

int main() {
  do{
    c = getc(stdin);
    if(c>='0'&&c<='9') {
      arr[len_arr] *= 10;
      arr[len_arr] += (c-'0');
    }
    else {
      if(c=='-') op[len_arr] = 0;
      else if (c=='+') op[len_arr] = 1;
      len_arr++;
    }
  }while(c!='\n'&&c!=EOF);
  int pos = 0;
  for(int i = 1; i < len_arr; i++) {
    if(op[i-1]==1) {
      arr[pos] += arr[i];
      arr[i] = 0;
    } else {
      pos = i;
    }
  }
  for(int i = 1; i < len_arr; i++) {
    arr[0] -= arr[i];
  }
  printf("%d\n",arr[0]);
}
