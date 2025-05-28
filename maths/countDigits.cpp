#include "iostream"
#include "cmath"
using namespace std;

int countDigits(int n)
{
  int temp = n, count = 0;
  while (temp)
  {
    temp /= 10;
    count++;
  }
  return count;
}

int main()
{
  int n = 3434343;
  cout << floor(log10(n) + 1);
  return 0;
}