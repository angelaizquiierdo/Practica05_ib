#include<iostream>
#include<iomanip>
int main() {
  double valor;
  double suma{0};
  int intinerador{0};
  while(std::cin >> valor) {
    suma += valor;
    intinerador++;
}
  double resultado = suma / intinerador;
  std::cout <<  std::setprecision(2) << resultado << std::endl;
return 0;
}

