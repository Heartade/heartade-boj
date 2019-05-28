#include <cstdio>
#include <iostream>
#include <functional>
#include <algorithm>
#include <stack>
#include <string>
#define MAX 100000
using namespace std;

int num;
int ls[MAX];
int numbers[MAX];
int main() {
  scanf("%d",&num);
  for(int i = 0; i < num; i++) {
    scanf("%d",&(ls[i]));
    numbers[i] = ls[i];
  }
  sort(numbers,numbers+num,less<int>());
  int pos = 0;
  int pos_num = 0;
  string act = "";
  stack<int> s;
  while(pos<num) {
    while(s.empty() || s.top() != ls[pos]) {
      if(pos_num == num) {
        printf("NONE\n");
        return 0;
      }
      s.push(numbers[pos_num]);
      pos_num++;
      act += "+\n";
    }
    s.pop();
    act += "-\n";
    pos++;
  }
  cout << act;
  return 0;
}
