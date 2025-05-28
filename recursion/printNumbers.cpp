// print 1 to N using recursion
#include "iostream"
using namespace std;

void printNumbers(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  printNumbers(n - 1);
}

int main()
{
  int num = 10;
  printNumbers(num);
  return 0;
}