#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
  std::vector<std::string> pairs;
  
  if (s.size() != 0) {
    for (int i = 0; i < s.size() - 1; i+=2) { 
      pairs.push_back(s.substr(i, 2));
    }
    if (s.size() % 2 == 1) { 
      auto last = std::string(1, s[s.size() - 1]) + '_';
      pairs.push_back(last);
    }

  }
  return pairs;
}
