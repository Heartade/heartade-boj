#define MAX_VALUE 2000005
#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[MAX_VALUE];
  int num;
  int x;
  cin >> num;
  for(int i = 0; i < MAX_VALUE; i++) {
    arr[i] = 0;
  }
  for(int i = 0; i < num; i++) {
    cin >> x;
    arr[x+1000000] = 1;
  }
  for(int i = 0; i < MAX_VALUE-5; i++) {
    if(arr[i]) cout << i-1000000 << endl;
  }
}
