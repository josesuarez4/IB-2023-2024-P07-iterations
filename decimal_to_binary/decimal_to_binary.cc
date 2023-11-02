/* Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica

 @author Jose Suárez Felipe
 email: alu0101556376@ull.edu.es
 @date Oct 30, 2023
 @brief decimal a binario
*/


#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if (n == 0) std::cout << 0;
    while (n != 0) {
        std::cout << n % 2;
        n = n/2;
    }
  std::cout << std::endl;
  return 0;
}
