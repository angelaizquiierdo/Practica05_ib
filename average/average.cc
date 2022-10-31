 /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file sum_three_integal.cc
  * @author Ángela Zhouling Izquierdo Padrón
  * @date 26 october 2022
  * @brief Write a program that reads three numbers and prints their sum.
  */

#include<iostream>
#include<iomanip>
int main() {
  double valor, suma{0.0}, intinerador{0.0};
  while(std::cin >> valor) {
    suma += valor;
    intinerador++;
}
  double resultado = suma / intinerador;
  std::cout << std::fixed << std::setprecision(2) << resultado << std::endl;
return 0;
}
