// show highest frequency & lowest frequency numbers
#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

struct Frequency
{
  int number;
  int frequency;
};

vector<Frequency> countFrequency(const int arr[], const int size)
{
  unordered_map<int, int> hash;
  vector<Frequency> result(2); // Pre-allocate space for 2 elements
  Frequency &high = result[0];
  Frequency &low = result[1];

  // Initialize high and low
  high = {arr[0], 1};
  low = {arr[0], INT_MAX};

  // First pass: count frequencies
  for (int i = 0; i < size; ++i)
  {
    hash[arr[i]]++;
  }

  // Second pass: find max and min frequencies
  for (const auto &[num, freq] : hash)
  {
    if (freq > high.frequency)
    {
      high.number = num;
      high.frequency = freq;
    }
    if (freq < low.frequency)
    {
      low.number = num;
      low.frequency = freq;
    }
  }

  return result;
}

int main()
{
  const int arr[] = {2, 1, 1, 2, 5, 0};
  const int size = sizeof(arr) / sizeof(arr[0]);

  const vector<Frequency> result = countFrequency(arr, size);
  cout << "Highest frequency: Number " << result[0].number
       << " appears " << result[0].frequency << " times\n";
  cout << "Lowest frequency: Number " << result[1].number
       << " appears " << result[1].frequency << " times\n";

  return 0;
}