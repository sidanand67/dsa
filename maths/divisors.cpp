#include "iostream"
using namespace std;

vector<int> findDivisors(int n)
{
  vector<int> divisors;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      divisors.push_back(i);
      if (n / i != i)
      {
        divisors.push_back(n / i);
      }
    }
  }
  return divisors;
}

int main()
{
  int n = 36;
  vector<int> result = findDivisors(n);
  sort(result.begin(), result.end());
  for (auto it : result)
  {
    cout << it << " ";
  }
  return 0;
}