/* 
 Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica

 * @author Ángela Izquierdo Padrón
 * @date 26 Octubre 2022
 * @brief Write a program that reads two natural numbers a and b, with b > 0, and prints the integer division d and the remainder r of a divided by b.
	  Remember that, by definition, d i r must be the only integer numbers such that 0 ≤ r < b and d · b + r = a.
*/ 
#include <iostream>

int main() {
  int numero_1{0}, numero_2{0};
  std::cin >> numero_1 >> numero_2;
  if(numero_2 > 0) {
    std::cout << numero_1 / numero_2 <<" " << numero_1%numero_2 << std::endl; 
  }
  return 0;
  }
  

