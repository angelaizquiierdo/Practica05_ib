/* 
 Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica

 * @author Ángela Izquierdo Padrón
 * @date 26 Octubre 2022
 * @brief Este es un programa que ordena los bytes .
*/ 

#include <iostream>

int main() {
  char valor;
  std::cout << "Entrada \t Salida" << std::endl;
  std::cin >> valor;
  int ascii = static_cast<int>(valor);
    if(65 <= ascii && ascii <= 90) { 
      std::cout << valor << "\t\t" << static_cast<char>(ascii + 32) << std::endl;
    } else if(97 <= ascii && ascii <= 122) {
      std::cout << "ya esta en minuscula" << std::endl;
    } else {
      std::cout << "No es una letra sino un simbolo" << std::endl;
    }
  
  return 0;
}
