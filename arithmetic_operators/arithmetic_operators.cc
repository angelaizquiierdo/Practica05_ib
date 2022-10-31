/* 
 Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica

 * @author Ángela Izquierdo Padrón
 * @date 26 Octubre 2022
 * @brief Es un programa que imprime en pantalla tipos aritmetico y el resultado de operar las variables
 *        con todos los operadores que pueda utilizar con ellas. Utilice operadores aritméticos y de comparación
*/ 

#include<iostream>
#include<cmath>

int main() {
  std::cout << "Este es un programa muestra todas las operaciones aritmeticas y las comparaciones\n";
  std::cout << "Introduce dos numeros\n" << "El primer numero:";
  double numero_1;
  std::cin >> numero_1;
  std::cout << "El segundo numero:";
  double numero_2;
  std::cin >> numero_2;
  std::cout << "El resultado de operar " << numero_1 << " + " << numero_2 << " es " << (numero_1 + numero_2) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " - " << numero_2 << " es " << (numero_1 - numero_2) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " / " << numero_2 << " es " << (numero_1 / numero_2) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " * " << numero_2 << " es " << (numero_1 * numero_2) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " * " << numero_1 << " es " << (numero_1 * numero_1) << "\n";
  std::cout << "El resultado de operar " << numero_2 << " * " << numero_2 << " es " << (numero_2 * numero_2) << "\n";

  double resta = numero_1 - numero_2;
  double comparacion = 0.000000031;
  std::cout << "El resultado de operar " << numero_1 << " < " << numero_2 << " es " << ( resta <= comparacion ) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " > " << numero_2 << " es " << ( resta >= comparacion ) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " <= " << numero_2 << " es " << ( resta <= comparacion && fabs( resta <= comparacion )) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " >= " << numero_2 << " es " << ( resta >= comparacion && fabs( resta >= comparacion )) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " != " << numero_2 << " es " << ( resta >= comparacion ) << "\n";
  std::cout << "El resultado de operar " << numero_1 << " == " << numero_2 << " es " << ( resta <= comparacion ) << "\n";
return 0;
}
