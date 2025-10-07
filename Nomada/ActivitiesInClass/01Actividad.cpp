#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

constexpr double PI = 3.1415926535;

// Definición de la clase para el enfoque POO
class Circulo {
private:
  double radio;

public:
  Circulo(double r) : radio(r) {}

  double calcularArea() const { return PI * radio * radio; }
};

int main() {
  const std::vector<float> radios = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

  std::cout
      << "Calculando las áreas de 5 círculos con 3 paradigmas diferentes:\n"
      << std::endl;

  // --- 1. Paradigma Imperativo ---
  std::cout << "--- 1. Enfoque Imperativo ---" << std::endl;
  {
    std::vector<double> areas;
    for (float r : radios) {
      areas.push_back(PI * r * r);
    }

    for (double area : areas) {
      std::cout << area << " ";
    }
    std::cout << "\n" << std::endl;
  }

  // --- 2. Paradigma Funcional ---
  std::cout << "--- 2. Enfoque Funcional ---" << std::endl;
  {
    std::vector<double> areas;
    std::transform(radios.begin(), radios.end(), std::back_inserter(areas),
                   [](float r) { return PI * r * r; });

    for (double area : areas) {
      std::cout << area << " ";
    }
    std::cout << "\n" << std::endl;
  }

  // --- 3. Paradigma Orientado a Objetos ---
  std::cout << "--- 3. Enfoque Orientado a Objetos ---" << std::endl;
  {
    std::vector<Circulo> circulos;
    for (float r : radios) {
      circulos.push_back(Circulo(r));
    }

    for (const auto &circulo : circulos) {
      std::cout << circulo.calcularArea() << " ";
    }
    std::cout << "\n" << std::endl;
  }

  return 0;
}
