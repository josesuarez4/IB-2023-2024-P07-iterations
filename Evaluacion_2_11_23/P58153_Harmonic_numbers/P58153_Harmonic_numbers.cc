#include <iomanip>
#include <iostream>

int main() {
  double numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    double result{0.0};
    for (int i = numero2 + 1; i <= numero1; i++) {
      result += 1.0 / i;
    }
    std::cout << std::fixed << std::setprecision(10) << result << std::endl;
  }
}
