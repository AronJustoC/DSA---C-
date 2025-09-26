#include <iostream>
#include <ostream>

void retorarMatrizCuadrada(int n) {
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      std::cout << j + 1 << " ";
    }
    std::cout << std::endl;
  }
}

void cuadradoEstrellas(int e) {
  for (size_t i = 0; i < e; i++) {
    for (size_t j = 0; j < e; j++) {
      std::cout << "*" << " ";
    }
    std::cout << std::endl;
  }
}

void cuadradoLetras(int l) {
  char c = 'A';
  for (size_t i = 0; i < l; i++) {
    for (size_t j = 0; j < l; j++) {
      std::cout << c << " ";
      c++;
    }
    std::cout << std::endl;
  }
}

void cuadradoConsecutivo(int n) {
  int counter = 0;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      std::cout << counter + 1 << " ";
      counter++;
    }
    std::cout << std::endl;
  }
}

void cuadradoLetrasConsecutivas(int a) {
  char letra = 'A';
  for (size_t i = 0; i < a; i++) {
    for (size_t j = 0; j < a; j++) {
      std::cout << letra << " ";
      letra++;
    }
    std::cout << std::endl;
  }
}

void trianguloEstrellas(int altura) {
  for (size_t i = 0; i < altura; i++) {
    for (size_t j = 0; j < i + 1; j++) {
      std::cout << "*" << " ";
    }
    std::cout << std::endl;
  }
}

void trianguloConsecutivo(int n) {
  int counter = 0;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < i + 1; j++) {
      std::cout << counter + 1 << " ";
    }
    counter++;
    std::cout << std::endl;
  }
}

void trianguloConsecutivoRegre(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j > 0; j--) {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
}

void trianguloConsecutivoPro(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j >= 0; j--) {
      char letra = 'A' + j;
      std::cout << letra << " ";
    }
    std::cout << std::endl;
  }
}

void trianguloInvertido(int n) {
  for (size_t i = 0; i < n; i++) {
    for (size_t j = i; j > 0; j--) {
      std::cout << " ";
    }
    for (size_t j = n - i; j > 0; j--) {
      std::cout << i + 1;
    }
    std::cout << std::endl;
  }
}

void piramide(int altura) {
  for (size_t i = 0; i < altura; i++) {
    for (size_t j = 0; j < altura - i; j++) {
      std::cout << " ";
    }
    for (size_t j = 0; j < i + 1; j++) {
      std::cout << j + 1;
    }
    for (size_t j = i + 1; j > 1; j--) {
      std::cout << j - 1;
    }
    std::cout << std::endl;
  }
}

void rombo(int altura) {
  for (size_t i = 0; i < altura; i++) {
    for (size_t j = 0; j < altura - i; j++) {
      std::cout << " ";
    }
    std::cout << "*";
    if (i > 0) {
      for (size_t j = 0; j < 2 * i - 1; j++) {
        std::cout << " ";
      }
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  for (int i = altura; i >= 0; i--) {
    for (int j = 0; j < altura - i; j++) {
      std::cout << " ";
    }
    std::cout << "*";
    if (i > 0) {
      for (size_t j = 0; j < 2 * i - 1; j++) {
        std::cout << " ";
      }
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

int main() {
  retorarMatrizCuadrada(7);
  cuadradoLetras(4);
  cuadradoEstrellas(6);
  cuadradoConsecutivo(3);
  cuadradoLetrasConsecutivas(3);
  trianguloEstrellas(5);
  trianguloConsecutivo(4);
  trianguloConsecutivoRegre(4);
  trianguloConsecutivoPro(4);
  trianguloInvertido(4);
  piramide(5);
  rombo(15);
  return 0;
}
