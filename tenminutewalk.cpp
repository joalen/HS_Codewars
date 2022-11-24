#include<vector>

using namespace std;

bool isValidWalk(vector<char> walk) {
  int position = 0; 
  
  for (int i = 0; i < (int) walk.size(); i++) {
    switch (walk.at(i)) { 
      case 'n': 
        position++;
        break;
      case 's': 
        position--;
        break;
      case 'w': 
        position -= 2; 
        break;
      default: 
        position += 2; 
        break; 
    }
  }

  return ((walk.size() == 10) && position == 0) ? true : false;
}
