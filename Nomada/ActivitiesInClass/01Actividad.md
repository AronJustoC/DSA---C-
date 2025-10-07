# Paradigmas de Programación: Calculando el Área de Círculos

Este documento explica cómo abordar el problema de calcular el área de cinco
círculos utilizando tres paradigmas de programación diferentes: Imperativa,
Orientada a Objetos y Funcional.

---

## 1. Programación Imperativa

La programación imperativa se enfoca en describir _cómo_ un programa opera,
paso a paso. Se basa en instrucciones que cambian el estado del programa.

**Pasos para calcular el área de 5 círculos:**

1. **Iniciar un bucle** que se repita 5 veces.
2. Dentro del bucle:
   a. **Declarar una variable** `radio` (tipo `float` o `double`).
   b. **Solicitar** al usuario que ingrese el valor del radio.
   c. **Declarar una variable** `area`.
   d. **Calcular el área** usando la fórmula `area = PI * radio * radio`.
   e. **Imprimir** el resultado del área calculada.
3. **Finalizar el bucle**.

---

## 2. Programación Orientada a Objetos (POO)

La POO organiza el código en "objetos", que son instancias de "clases". Estos
objetos encapsulan tanto datos (atributos) como comportamiento (métodos).

**Pasos para modelar el problema con POO:**

1. **Crear una clase `Circulo`** que representará el concepto de un círculo.
2. **Definir atributos (datos)** en la clase:
   - `radio` (float): Para almacenar la longitud del radio.
   - `PI` (constante): Para almacenar el valor de Pi.
3. **Definir métodos (comportamiento)** en la clase:
   - Un **constructor** para inicializar el `radio` al crear un objeto.
   - `calcularArea()`: Un método que retorna el área (`PI * radio * radio`).
   - `imprimirDetalles()`: Un método que muestra el radio y el área calculada
     del círculo.
4. **Crear cinco instancias (objetos)** de la clase `Circulo`, cada una con un
   radio diferente.
5. **Llamar al método `imprimirDetalles()`** para cada una de las cinco
   instancias.

---

## 3. Programación Funcional

La programación funcional trata la computación como la evaluación de funciones
matemáticas y evita cambiar el estado y los datos mutables. Se enfoca en el
_qué_ en lugar del _cómo_.

**Pasos para resolver el problema con un enfoque funcional:**

1. **Definir una función pura `calcularArea(radio)`**:
   - Esta función recibe `radio` como argumento.
   - Retorna el resultado de `PI * radio * radio` sin modificar ningún estado
     externo.
2. **Crear una lista o array** que contenga los cinco valores de los radios.
   Por ejemplo: `[1.0, 2.5, 3.0, 4.2, 5.0]`.
3. **Mapear la lista de radios**: Utilizar una función de orden superior (como
   `map`) para aplicar la función `calcularArea` a cada elemento de la lista de
   radios, generando una nueva lista con las áreas correspondientes.
4. **Imprimir los resultados**: Recorrer la lista de áreas y mostrar cada
   valor.

