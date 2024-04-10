#include <iostream>

int main() {
  int num1, num2, result;
  char op;

  std::cout << "Digite o primeiro número: ";
  std::cin >> num1;

  std::cout << "Digite o segundo número: ";
  std::cin >> num2;

  std::cout << "Digite o operador (+, -, *, /): ";
  std::cin >> op;

  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      std::cout << "Operador inválido!" << std::endl;
      return 1;
  }

  std::cout << "Resultado: " << result << std::endl;

  return 0;
}
