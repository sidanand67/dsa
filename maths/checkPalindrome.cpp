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

bool isPalindrome(int n)
{
  return reverse(n) == n;
}

int main()
{
  int n = 343121;
  cout << isPalindrome(n);
  return 0;
}