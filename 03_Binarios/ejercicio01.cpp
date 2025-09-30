// convertir a binario un decimal

#include <cmath>
#include <iostream>
using namespace std;

int decimalBinario(int n) {
  int binario = 0;
  int i = 0;
  while (n > 0) { // 10
    int numero;
    numero = n % 2;
    n /= 2;
    binario += numero * pow(10, i);
    ++i;
  }
  return binario;
}

int binarioDecimal(int n) {
  int decimal = 0;
  int i = 0;
  while (n > 0) {
    int numero;
    numero = n % 10;
    n /= 10;
    decimal += numero * pow(2, i);
    ++i;
  }
  return decimal;
}

int main() {
  cout << decimalBinario(10) << endl;
  cout << binarioDecimal(1010) << endl;
  return 0;
}
