#include "iostream"
using namespace std;

int findIndex(vector<int> arr, int target)
{
  int length = arr.size();
  for (int i = 0; i < length; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  vector<int> arr = {34, 2, 21, 1, 8, 10, 5};
  int target = 50;
  int eleIndex = findIndex(arr, target);
  cout << eleIndex;
  return 0;
}