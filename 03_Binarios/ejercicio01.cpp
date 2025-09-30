// convertir a binario un decimal

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
void decimalBinario(int n) {
  string binario = "";
  string invertido = "";
  while (n > 0) {
    int numero;
    numero = n % 2;
    binario.append(to_string(numero));
    n /= 2;
  }
  reverse(binario.begin(), binario.end());
  cout << binario;
}
int main() {
  decimalBinario(10);
  return 0;
}
