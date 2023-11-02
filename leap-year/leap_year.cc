/* Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica

 @author Jose Suárez Felipe
 email: alu0101556376@ull.edu.es
 @date Oct 30, 2023
 @brief año bisiesto
*/

#include <iostream>

int main () {
  int x;
  std::cin >> x;
  if (x % 10 != 0 && x % 4 == 0) {
    std::cout << "Si" << std::endl;
  }
  else if (x % 10 == 0 && x % 100 == 0 ) {
    x = x / 100;
    if (x % 4 == 0) {
      std::cout << "Si" << std::endl;
    }
    else {
      std::cout << "No" << std::endl;
    }
  }
  else {
  std::cout << "No" << std::endl;
  }

}
