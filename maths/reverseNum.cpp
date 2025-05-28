#include "iostream"
using namespace std;

int reverse(int n)
{
  int temp = n, revNum = 0;
  while (temp)
  {
    int lastDigit = temp % 10;
    revNum = revNum * 10 + lastDigit;
    temp /= 10;
  }
  return revNum;
}

int main()
{
  int n = 13242;
  int revNum = reverse(n);
  cout << revNum;
  return 0;
}
