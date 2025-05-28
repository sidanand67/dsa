// check if array is in asending order
#include "iostream"
using namespace std;

bool isSorted(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
  }
  return true;
}

// recursive solution
bool isSorted2(int arr[], int n)
{
  // base case: array with 0 or 1 element is always sorted
  if (n == 0 || n == 1)
    return true;

  // check if last two elements are sorted
  if (arr[n - 2] > arr[n - 1])
    return false;

  // recursively check the remaining array
  return isSorted2(arr, n - 1);
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  // cout << isSorted(arr, n);
  cout << isSorted2(arr, n);
  return 0;
}