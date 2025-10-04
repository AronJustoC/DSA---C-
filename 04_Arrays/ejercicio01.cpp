// Arrays

#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

struct ResultadoSumaProducto {
  int suma;
  int producto;
};

int elementoMenor(int arr[], int sz);
int elementoMayor(int arr[], int sz);
int busquedaLinear(int arr[], int sz, int target);
void inverirArrayStartEnd(int arr[], int sz);
ResultadoSumaProducto sumaProducto(int arr[], int sz);
int producto(int arr[], int sz);
void intercambioMaxMin(int arr[], int zs);
void imprimirArray(int arr[], int sz);
void imprimirVector(const vector<int> &vect);
void imprimirUnicosFuerzaBruta(int arr[], int sz);
vector<int> interseccion_FuerzaBruta(int arr1[], int sz1, int arr2[], int sz2);

int main() {
  int array[] = {4, 6, 8, 6, 3, 2, 3, 7, 8, 9, 8};
  int array1[] = {4, 3, 5, 3, 3, 2, 3, 4, 34, 9, 8};
  int sz = 11;
  int target = 9;
  cout << "El minimo elemento es: " << array[elementoMenor(array, sz)] << endl;
  cout << "El maximo elemento es: " << array[elementoMayor(array, sz)] << endl;
  cout << "El indice de elemento " << target
       << " es: " << busquedaLinear(array, sz, target) << endl;
  inverirArrayStartEnd(array, sz);
  imprimirArray(array, sz);
  intercambioMaxMin(array, sz);
  imprimirArray(array, sz);
  imprimirUnicosFuerzaBruta(array, sz);
  (interseccion_FuerzaBruta(array, 11, array1, 11));
  return 0;
};

int elementoMenor(int arr[], int sz) {
  int min = INT16_MAX;
  for (int i = 0; i < sz; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int elementoMayor(int arr[], int sz) {
  int max = INT16_MIN;
  for (int i = 0; i < sz; i++) {
    if (arr[i] > max) {
      return i;
    }
  }
  return -1;
}

int busquedaLinear(int arr[], int zs, int target) {
  for (int i = 0; i < zs; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

void inverirArrayStartEnd(int arr[], int sz) {
  int start = 0;
  int end = sz - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
};

// Homework

ResultadoSumaProducto sumaProducto(int arr[], int zs) {
  ResultadoSumaProducto res = {0, 1};
  for (int i = 0; i < zs; i++) {
    res.suma += arr[i];
    res.producto *= arr[i];
  }
  return res;
}

void intercambioMaxMin(int arr[], int sz) {
  int indiceMax = elementoMayor(arr, sz);
  int indiceMin = elementoMenor(arr, sz);

  if (indiceMax != -1 && indiceMin != -1) {
    swap(arr[indiceMax], arr[indiceMin]);
  }
}

void imprimirUnicosFuerzaBruta(int arr[], int sz) {
  cout << "Valores unicos (metodo fuerza bruta)" << endl;
  for (int i = 0; i < sz; i++) { // 0 - 1
    bool esUnico = true;
    for (int j = 0; j < i; j++) { // x - 0
      if (arr[i] == arr[j]) {
        esUnico = false;
        break;
      }
    }
    if (esUnico) {
      cout << arr[i] << " ";
    }
  }
  cout << endl;
};

vector<int> interseccion_FuerzaBruta(int arr1[], int sz1, int arr2[], int sz2) {
  unordered_set<int> resultado_set;
  for (int i = 0; i < sz1; i++) {
    for (int j = 0; j < sz2; j++) {
      if (arr1[i] == arr2[j]) {
        resultado_set.insert(arr1[i]);
      }
    }
  }
  return vector<int>(resultado_set.begin(), resultado_set.end());
}

void imprimirArray(int arr[], int sz) {
  for (int i = 0; i < sz; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void imprimirVector(const vector<int> &vect) {
  for (int elemento : vect) {
    cout << elemento << " ";
  }
  cout << endl;
}
