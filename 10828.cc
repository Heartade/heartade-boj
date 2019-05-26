#include <cstdio>
#include <cstring>

int stack[10001];
int main() {
  int size = 0;
  int N;
  scanf("%d",&N);
  char comm[16];
  for(int i = 0; i < N; i++) {
    scanf("%s",comm);
    if(!strcmp(comm, "push")) {
      scanf("%d",&(stack[size++]));
    } else if (!strcmp(comm, "pop")) {
      if(size) printf("%d\n",stack[--size]);
      else printf("-1\n");
    } else if (!strcmp(comm, "size")) {
      printf("%d\n",size);
    } else if (!strcmp(comm, "empty")) {
      if(size) printf("0\n");
      else printf("1\n");
    } else if (!strcmp(comm, "top")) {
      if(size) printf("%d\n",stack[size-1]);
      else printf("-1\n");
    }
  }
  return 0;
}

