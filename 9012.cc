#include <cstdio>
#include <stack>
using namespace std;
char str[51];
int main() {
  int n;
  bool doomed;
  scanf("%d",&n);
  stack<int> st;
  for(int i = 0; i < n; i++) {
    doomed = false;
    scanf("%s",str);
    for(int j = 0; str[j]; j++) {
      if(str[j]=='(') {
        st.push(0);
      } else {
        if(st.empty()) {
          doomed = true;
          break;
        }
        st.pop();
      }
    }
    if(doomed) printf("NO\n");
    else if(st.empty()) printf("YES\n");
    else printf("NO\n");
    while(!st.empty()) st.pop();
  }
}
