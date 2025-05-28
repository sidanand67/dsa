// find missing element from array containing numbers from 1 to N
#include "iostream"
using namespace std;

// approach 1
int findElement(vector<int> arr, int n)
{
  int sumOfArr = 0, sumOfN = n * (n + 1) / 2;
  for (auto it : arr)
  {
    sumOfArr += it;
  }
  return sumOfN - sumOfArr;
}

// approach 2
// using xor logic
// a ^ a = 0
// 0 ^ a = a
int findElement2(vector<int> arr, int n)
{
  int xor1 = 0, xor2 = 0;
  for (int i = 0; i < n - 1; i++)
  {
    xor1 = xor1 ^ arr[i];
    xor2 = xor2 ^ (i + 1);
  }
  xor2 = xor2 ^ n;
  return xor1 ^ xor2;
}

int main()
{
  vector<int> arr = {1, 4, 5, 2};
  int n = 5;
  int result = findElement2(arr, n);
  cout << result;
  return 0;
}