// Arrays

#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <utility>
using namespace std;

int elementoMenor(int arr[], int sz);
int elementoMayor(int arr[], int sz);
int busquedaLinear(int arr[], int sz, int target);
void inverirArrayStartEnd(int arr[], int sz);

int main() {
  int array[] = {4, 6, 8, 6, 3, 2, 3, 7, 8, 9, 8};
  int sz = 11;
  int target = 9;
  cout << "El minimo elemento es: " << elementoMenor(array, sz) << endl;
  cout << "El maximo elemento es: " << elementoMayor(array, sz) << endl;
  cout << "El indice de elemento " << target
       << " es: " << busquedaLinear(array, sz, target) << endl;

  inverirArrayStartEnd(array, sz);
  for (int i = 0; i < sz; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

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
      max = arr[i];
    }
  }
  return max;
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
