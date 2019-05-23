#define MAX_VALUE 1000005
#include <iostream>
using namespace std;

void mergesort(int* arr,int* buff,int left,int right) {
  //sort arr into buf
  if (right-left <= 1) {
    buff[left] = arr[left];
    return;
  }
  int mid = (left+right)/2;
  int lix = left;
  int rix = mid;
  mergesort(buff,arr,left,mid);
  mergesort(buff,arr,mid,right);
  for(int i = left; i < right; i++) {
    if (lix == mid) {
      buff[i] = arr[rix];
      rix++;
      continue;
    }
    else if (rix == right) {
      buff[i] = arr[lix];
      lix++;
      continue;
    }
    else if (arr[lix] <= arr[rix]) {
      buff[i] = arr[lix];
      lix++;
      continue;
    }
    else if (arr[rix] <= arr[lix]) {
      buff[i] = arr[rix];
      rix++;
      continue;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[MAX_VALUE];
  int buff[MAX_VALUE];//BUFF BOI UWU
  int num;
  cin >> num;
  for(int i = 0; i < num; i++) {
    cin >> arr[i];
    buff[i] = arr[i];
  }
  mergesort(arr,buff,0,num);
  for(int i = 0; i < num; i++) cout << buff[i] << endl;
}

