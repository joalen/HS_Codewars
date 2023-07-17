#include <unordered_map>

typedef std::unordered_map<int, std::string> uno_map; // define unordered_map 

class RGBToHex
{
public:
  static std::string rgb(int r, int g, int b);
};

std::string dec_to_hex(int decimal_value) { 
  uno_map ddhexadecimal_table = {
    {0, "0"}, {1, "1"}, {2, "2"}, {3, "3"}, {4, "4"}, {5, "5"}, {6, "6"}, {7, "7"},
    {8, "8"}, {9, "9"}, {10, "A"}, {11, "B"}, {12, "C"}, {13, "D"}, {14, "E"}, {15, "F"}
  };

  if (decimal_value < 0) {
    decimal_value = 0;  // Set negative values to 0
  } else if (decimal_value > 255) {
    decimal_value = 255;  // Set values larger than 255 to 255
  }

  if (decimal_value < 16) {
    return "0" + ddhexadecimal_table[decimal_value];
  }

  std::string hex_value = ddhexadecimal_table[decimal_value / 16] + ddhexadecimal_table[decimal_value % 16];
  return hex_value; 
}


std::string RGBToHex::rgb(int r, int g, int b) { 
  std::string RGBHex = "";

  RGBHex += dec_to_hex(r);
  RGBHex += dec_to_hex(g);
  RGBHex += dec_to_hex(b);

  return RGBHex;
}
