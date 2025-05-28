// check if a string is palindrome using recursion 
#include "iostream" 
using namespace std; 

bool checkPalindrome(string test, int left, int right) {
  if (left > right) {
    return true; 
  }
  if (test[left] != test[right]) {
    return false; 
  }
  left++, right--; 
  return checkPalindrome(test, left, right); 
}

int main() {
  string test = "nayan"; 
  int left = 0, right = test.size() - 1; 
  cout<< checkPalindrome(test, left, right); 
  return 0; 
}