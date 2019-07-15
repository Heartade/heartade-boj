#include <cstdio>
int A, B, c;
int main() {
  do {
    c = getc(stdin);
    if(0<c-'0' && c-'0'<10) {
      if(A!=0) {
        B = c-'0'+A;
        printf("%d\n",B);
        A = 0;
      } else {
        A = c-'0';
      }
    }
  } while(c!=EOF);
  return 0;
}
