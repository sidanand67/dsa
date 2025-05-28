// reverse array using recursion
#include <iostream>
using namespace std;

void reverseArray(int arr[], int l, int r)
{
  if (l >= r)
  {
    return;
  }
  // swapping array elements from low & high indexes
  int temp = arr[l];
  arr[l] = arr[r];
  arr[r] = temp;
  reverseArray(arr, l + 1, r - 1);
}

int main()
{
  int arr[4] = {1, 3, 2, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  reverseArray(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}