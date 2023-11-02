/* Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica

 @author Jose Suárez Felipe
 email: alu0101556376@ull.edu.es
 @date Oct 30, 2023
 @brief binario a decimal
*/

#include <iostream>
#include <cmath>

int main () {

  int x, i{0}, mult, binario = 0;
  std::cin >> x;
  while (x != 0) {
    mult = x % 10;
    x /= 10;
    binario += mult * pow(2, i);
    i++;
  }
  std::cout << binario << std::endl;
}
