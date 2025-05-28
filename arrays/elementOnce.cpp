// find element appearing once where each element appears twice
#include "iostream"
using namespace std;

// used xor property a ^ a = 0
int findElement(vector<int> arr)
{
  int num = 0;
  for (auto it : arr)
  {
    num = num ^ it;
  }
  return num;
}

int main()
{
  vector<int> arr = {4, 1, 2, 1, 2};
  int num = findElement(arr);
  cout << num;
  return 0;
}