// sum of first n natural numbers
#include "iostream"
using namespace std;

int findSum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return n + findSum(n - 1);
}

// non tail recursive solution
int factorial1(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * factorial1(n - 1);
}

// tail recursive recursive function
// tail recursive solutions are better because compiler doesn't have to save the state of parent function
// tail recursive -> function with last statement as recursive call
int factorial2(int n, int k = 1)
{
  if (n == 0 || n == 1)
  {
    return k;
  }
  return factorial2(n - 1, n * k);
}

int main()
{
  int num = 4;
  cout << findSum(num) << endl;
  cout << factorial2(5);
  return 0;
}
