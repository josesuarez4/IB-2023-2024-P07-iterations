#include <iostream>

int main() {
  char caracter;
  int j = 0;
  bool igual = true;
  while (std::cin >> caracter && igual) {
    if (caracter == '(') {
      j++;
    } 
    else {
      j--;
    }
    if (j < 0) {
      igual = false;
    }
  }
  if (j == 0) {
    std::cout << "yes" << std::endl;
  } 
  else if (j != 0) {
    std::cout << "no" << std::endl;
  }
  return 0;
}
