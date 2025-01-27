#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Using std::vector<bool> (demonstrates potential issues)
  std::vector<bool> boolVec(1000000);
  for(int i = 0; i < 1000000; ++i) boolVec[i] = (i%2 == 0);
  // Accessing elements and performing operations (can be slow)

  // Using std::vector<char> as a better alternative
  std::vector<char> charVec(1000000);
  for (int i = 0; i < 1000000; ++i) charVec[i] = (i % 2 == 0);
  // Accessing elements and performing operations (generally faster)
  return 0;
}
