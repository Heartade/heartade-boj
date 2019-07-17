#include <cstdio>
#include <queue>

using namespace std;

int num;
int main() {
  queue<int> q;
  scanf("%d",&num);
  int x;
  for(int i = 1; i <= num; i++) {
    q.push(i);
  }
  while(q.size()>1) {
    q.pop();
    x = q.front();
    q.pop();
    q.push(x);
  }
  printf("%d\n",q.front());
  return 0;
}
