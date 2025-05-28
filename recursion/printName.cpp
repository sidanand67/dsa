// print name n times using recursion
#include "iostream"
using namespace std;

void printName(string name, int n)
{
  if (n == 0)
  {
    return;
  }
  cout << name << endl;
  printName(name, n - 1);
}

int main()
{
  string name = "sidharth";
  int n = 5;
  printName(name, n);
  return 0;
}