/* 
 Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica

 * @author Ángela Izquierdo Padrón
 * @date 26 Octubre 2022
 * @brief Este es un programa que ordena los bytes .
*/ 

#include<iostream>

int main() {
 bool operador_1;
 bool operador_2;
 std::cout << "Este programa hace la tabla de la verdad\n";
 std::cout << "\n"  << "p" << "\t" << "q" << "\t" << "p U q" << "\t" << "p ∩ q" << "\t"<< "¬p" << "\t" << "¬q"<< "\n\n" ;
 operador_1 = false;
 operador_2 = false;
 std::cout << operador_1 << "\t" << operador_2 << "\t" << (operador_1 || operador_2) << "\t" << (operador_1&&operador_2)
 << "\t" << !operador_1 << "\t" << !operador_2 << "\n";
 operador_1 = false;
 operador_2 = true;
  std::cout << operador_1 << "\t" << operador_2 << "\t" << (operador_1 || operador_2) << "\t" << (operador_1&&operador_2)
 << "\t" << !operador_1 << "\t" << !operador_2 << "\n";
 operador_1 = true;
 operador_2 = false;
  std::cout << operador_1 << "\t" << operador_2 << "\t" << (operador_1 || operador_2) << "\t" << (operador_1&&operador_2)
 << "\t" << !operador_1 << "\t" << !operador_2 << "\n";
 operador_1 = true;
 operador_2 = true;
  std::cout << operador_1 << "\t" << operador_2 << "\t" << (operador_1 || operador_2) << "\t" << (operador_1&&operador_2)
 << "\t" << !operador_1 << "\t" << !operador_2 << "\n";
  return 0;
}
