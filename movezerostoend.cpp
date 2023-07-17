#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> sorted;
  int zeros = 0;
  for (int i = 0; i < input.size(); i++) { 
    if (input[i] == 0) { zeros++; }
    else { sorted.push_back(input[i]); }
  }
  
  while (zeros-- > 0) { 
    sorted.push_back(0);
  }
  
  return sorted;
}