#include <vector>
#include <cstdlib>

std::vector<std::vector<int>> pyramid(std::size_t n) {
  std::vector<std::vector<int>> pymid; 
  int r = n;
  
  while (n-- > 0) { 
    std::vector<int> slice; 
    for (int i = 0; i < r; i++) { slice.push_back(1); }
    pymid.push_back(slice);
    r = n;
  }
  reverse(pymid.begin(), pymid.end());
  return pymid; 
}