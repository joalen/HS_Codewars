#include <cmath> 
#include <string> 

using namespace std;

bool narcissistic( int value ){
  int checkVal = value; 
  int sum = 0; 
  int length = to_string(value).length(); 
  
  while (value != 0) {
    sum += pow((value % 10), length); 
    value /= 10; 
  }  
  
  return (sum == checkVal) ? true : false; 
}