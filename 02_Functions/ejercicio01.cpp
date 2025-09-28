// Funciones matemáticas básicas en C++
#include <iostream>
#include <vector>
#include <cmath>

// Usar el namespace estándar para evitar prefijos std::
using namespace std;

// Declaraciones de funciones para que puedan ser usadas antes de su definición
long long factorial(int n);
long long coeficienteBinomial(int n, int r);
int sumaDigitos(int n);
bool esPrimo(int n);
void primosHasta(int n);
int fib(int n);

/**
 * @brief Calcula la suma de los dígitos de un número entero.
 * Si el número es negativo, se convierte a positivo.
 * @param n El número entero.
 * @return La suma de sus dígitos.
 */
int sumaDigitos(int n) {
    if (n < 0) {
        n = -n;
    }
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

/**
 * @brief Calcula el coeficiente binomial C(n, r), también conocido como "n en r".
 * Utiliza factoriales. Puede ser ineficiente para números grandes.
 * @param n El número total de elementos.
 * @param r El número de elementos a elegir.
 * @return El valor del coeficiente binomial, o 0 si la entrada no es válida.
 */
long long coeficienteBinomial(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }
    // Optimización: C(n, r) es igual a C(n, n-r)
    if (r > n / 2) {
        r = n - r;
    }
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

/**
 * @brief Calcula el factorial de un número entero no negativo.
 * @param n El número.
 * @return El factorial de n.
 */
long long factorial(int n) {
    if (n < 0) return -1; // Factorial no está definido para negativos
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

/**
 * @brief Comprueba si un número es primo.
 * @param n El número a comprobar.
 * @return true si n es primo, false en caso contrario.
 */
bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

/**
 * @brief Encuentra todos los números primos hasta n usando la Criba de Eratóstenes.
 * Es un algoritmo mucho más eficiente que comprobar cada número individualmente.
 * @param n El límite superior para encontrar primos.
 */
void primosHasta(int n) {
    if (n < 2) {
        cout << "No hay números primos hasta " << n << endl;
        return;
    }
    vector<bool> es_primo(n + 1, true);
    es_primo[0] = es_primo[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (es_primo[p]) {
            for (int i = p * p; i <= n; i += p)
                es_primo[i] = false;
        }
    }

    cout << "Números primos hasta " << n << ":" << endl;
    for (int i = 2; i <= n; i++) {
        if (es_primo[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

/**
 * @brief Calcula el n-ésimo número de Fibonacci de forma iterativa.
 * @param n El índice en la secuencia de Fibonacci (comenzando desde 0).
 * @return El n-ésimo número de Fibonacci.
 */
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0;
    int b = 1;
    int siguiente;
    for (int i = 2; i <= n; i++) {
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    return b;
}

int main() {
    cout << "--- Suma de Dígitos ---" << endl;
    int num_digitos = 16;
    cout << "Suma de dígitos de " << num_digitos << ": " << sumaDigitos(num_digitos) << endl;
    cout << endl;

    cout << "--- Coeficiente Binomial ---" << endl;
    int n_bin = 7, r_bin = 3;
    cout << "Coeficiente binomial de C(" << n_bin << ", " << r_bin << "): " << coeficienteBinomial(n_bin, r_bin) << endl;
    cout << endl;

    cout << "--- Comprobación de Número Primo ---" << endl;
    int num_primo = 7;
    cout << "¿Es " << num_primo << " un número primo? " << (esPrimo(num_primo) ? "Sí" : "No") << endl;
    cout << endl;

    cout << "--- Búsqueda de Primos (Criba de Eratóstenes) ---" << endl;
    primosHasta(20);
    cout << endl;

    cout << "--- Secuencia de Fibonacci ---" << endl;
    int n_fib = 7;
    cout << "El " << n_fib << "-ésimo número de Fibonacci es: " << fib(n_fib) << endl;

    return 0;
}