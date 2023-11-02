/* Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica

 @author Jose Suárez Felipe
 email: alu0101556376@ull.edu.es
 @date Oct 30, 2023
 @brief serie de fibonacci
*/

#include <iostream>

int main () {

  int n, x = 0, y = 1, z = 1;
  std::cin >> n;
  std::cout << x << " " << y << " ";
  for (int i = 0; i < n; i++) {
    z = x + y;
    std::cout << z << " ";
    x = y;
    y = z;
  }
  return 0;
}
