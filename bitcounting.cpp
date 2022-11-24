unsigned int countBits(unsigned long long n) {
    unsigned int counter = 0; 
    while (n > 0) {
      if (n % 2 == 1) {
        counter++;
      }
      n /= 2; 
    }
    
    return counter; 
  }