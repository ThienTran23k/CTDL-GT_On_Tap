// Code from https://nguyenvanhieu.vn
 
#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
    
      return i;

  return -1;
}
 
int main() {
	// Tim mang gom {2, 3, 4, 10, 40}
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = search(arr, n, x);
  if (result != -1) {
    cout << x <<" xuat hien tai chi so "<< result <<endl;
  } else {
    cout<< x<< " khong co trong mang" ;
  }
  return 0;
}
