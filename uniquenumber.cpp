#include <vector> 
#include <map> 
#include <algorithm>

using namespace std;

float find_uniq(const vector<float> &v)
{
    map<float, unsigned> numbers; 
    
    for (int i = 0; i < (int) v.size(); i++) {
      if (numbers.find(v[i-1]) != numbers.end()) { // value checking (basically finding if an element exists)
        numbers[v[i]] += 1; // insertion and assignment only (not for checking)
      } else {
        numbers.insert(pair<float, unsigned>(v[i], 1));
      }
      
    }
  
    for (auto& i : numbers) {
      if (i.second == 1) {
          return i.first; 
      }
    };
}