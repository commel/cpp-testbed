#include <iostream>
#include <functional>

int compute(std::function<int(int, int)> func, int a, int b) {
  return func(a, b);
}

std::function<int(int, int)> multiply_func() {
  return [](int a, int b) { return a * b; };
}

int main() {
  auto adder = [](int a, int b) { return a + b; };
  std::cout << compute(adder, 1, 1) << std::endl;
  auto adds_five = std::bind(adder, 5, std::placeholders::_1);
  std::cout << adds_five(10) << std::endl;
  return 0;
}
