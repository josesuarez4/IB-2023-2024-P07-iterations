/* Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica

 @author Jose Suárez Felipe
 email: alu0101556376@ull.edu.es
 @date Oct 30, 2023
 @brief suma de dígitos de un número
*/

#include <iostream>

int main () {

  int x, suma{0};
  std::cin >> x;
  while(x != 0) {
    suma += x % 10;
    x = x / 10;

  }
  std::cout << suma << std::endl;
}
