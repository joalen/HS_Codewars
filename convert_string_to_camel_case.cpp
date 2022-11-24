#include <string>

using namespace std; 

string to_camel_case(std::string text) {
  string newStr = ""; 
  
  for (int i = 0; i < (int) text.length(); i++) {
    if (i != 0 && (text[i] != '-' || text[i] != '_')) {
      if (text[i-1] == '-' || text[i-1] == '_') {
        newStr += toupper(text[i]); 
      } else if (!(text[i] == '-' || text[i] == '_')){
        newStr += text[i]; 
      }
    } else if (i == 0) {
      newStr += text[i]; 
    }
  }
  return newStr;
}