#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
  std::map<char, unsigned> occuringToChars; 
  
  for (int i = 0; i < (int) string.length(); i++) {

    if (occuringToChars.count(string[i]) > 0) {
      occuringToChars[string[i]] += 1;
    } else { 
      occuringToChars.insert(std::pair<char, unsigned>(string[i], 1));
    }
  }
    return occuringToChars;
}
