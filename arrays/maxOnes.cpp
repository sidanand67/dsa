// maximum consecutive ones
#include <iostream>
using namespace std;

int findMaxOnes(int arr[], int size)
{
  int count = 0, maxCount = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 1)
    {
      count++;
      maxCount = max(maxCount, count);
    }
    else
    {
      count = 0; // Reset count when we encounter 0
    }
  }
  return maxCount;
}

int main()
{
  int arr[] = {1, 1, 0, 1, 1, 1, 1, 0};
  int size = sizeof(arr) / sizeof(arr[0]); // Calculate size in main where it works
  int result = findMaxOnes(arr, size);
  cout << "Maximum consecutive ones: " << result;
  return 0;
}