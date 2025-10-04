// bitewise operators
#include <iostream>
using namespace std;

int main() {
  // Operador AND a nivel de bits (&)
  cout << (6 & 10) << endl; //-> 2
  // Operador OR a nivel de bits (|)
  cout << (6 | 10) << endl; //-> 14
  // Operador XOR a nivel de bits (^)
  cout << (6 ^ 10) << endl; //-> 12
  // Operador <<  multiplicar por potencias de 2. x << n es igual a x * 2^n.
  cout << (10 << 2) << endl; // 10 x 2^2 -> 40
  // Operador >>  divide entre potencias de 2. x << n es igual a x / 2^n.
  cout << (10 >> 1) << endl; // 10 x 1/(2^1)-> 5
  return 0;
}
