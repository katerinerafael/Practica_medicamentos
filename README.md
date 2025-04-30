# Practica_medicamentos

🗂️ Explicación del Funcionamiento de Cada Archivo del Proyecto de Gestión de Medicamentos
Este proyecto en C++ simula un sistema básico de gestión de medicamentos para un hospital. Está organizado en tres archivos principales: un archivo de cabecera (medicamento.h), un archivo de implementación (medicamento.cpp), y el archivo principal de ejecución (main.cpp). A continuación, se describe el propósito y funcionamiento de cada uno:

✅ 1. medicamento.h — Archivo de Cabecera
Este archivo contiene la definición de la clase Medicamento y de algunas funciones auxiliares. Sirve como contrato o plano de lo que se puede hacer con los objetos de tipo medicamento.

Contenidos y propósito:
Definición de constantes, como MAX_MEDICAMENTOS, que establece el número máximo de medicamentos que se pueden manejar.

Declaración de la clase Medicamento, que incluye:

Atributos privados como id, nombre, cantidad, y un arreglo precios[5] para almacenar distintos precios del medicamento.

Métodos públicos que permiten asignar datos, obtener precios, mostrar información, comparar precios y actualizar cantidades.

Declaración de funciones auxiliares:

intercambiar(int *a, int *b): permite intercambiar valores de dos variables usando punteros.

intercambiarReferencia(int &a, int &b): permite intercambiar valores de dos variables usando referencias.

Función del archivo:
Permitir que otros archivos (como main.cpp y medicamento.cpp) conozcan la estructura de la clase y puedan usar sus métodos sin necesidad de definir todo de nuevo.

✅ 2. medicamento.cpp — Archivo de Implementación
Este archivo contiene la implementación de los métodos de la clase Medicamento y de las funciones auxiliares declaradas en el archivo .h.

Contenidos y propósito:
Constructor por defecto: inicializa todos los atributos del objeto a valores por defecto.

SetDatos(): permite establecer los datos básicos de un medicamento (ID, nombre, cantidad).

SetPrecio() y GetPrecio(): manejan el acceso al arreglo de precios.

Mostrar(): imprime por pantalla todos los datos del medicamento.

CompararPrecio(): compara si un precio dado existe en el arreglo de precios.

ActualizarCantidad(): modifica la cantidad disponible del medicamento.

Funciones intercambiar() y intercambiarReferencia():

La primera utiliza punteros para intercambiar valores.

La segunda usa referencias, una forma más moderna y segura en C++.

Función del archivo:
Contener la lógica de los métodos declarados en medicamento.h, separando la implementación del diseño para mejorar la organización del código.

✅ 3. main.cpp — Archivo Principal de Ejecución
Este archivo contiene la función main(), que inicia y controla la ejecución del programa.

Contenidos y propósito:
Crea un arreglo inventario de objetos tipo Medicamento, utilizando un arreglo lineal.

Inicializa tres medicamentos con valores específicos.

Muestra los datos iniciales del inventario.

Utiliza un arreglo cantidades[] de tipo int para demostrar cómo usar arreglos y punteros.

Asigna un puntero pCantidades al arreglo y muestra su contenido usando aritmética de punteros.

Realiza un intercambio de cantidades entre dos medicamentos:

Primero usando punteros (función intercambiar).

Luego usando referencias (función intercambiarReferencia).

Actualiza el inventario después del intercambio y muestra los cambios.

Función del archivo:
Ejecutar el programa simulando una operación básica de gestión de inventario, integrando el uso de clases, arreglos, punteros, y funciones. También sirve como demostración práctica de los conceptos aprendidos.

✅ Conclusión
Este sistema modular muestra cómo organizar un programa C++ realista usando los conceptos fundamentales del lenguaje. La separación en .h, .cpp, y main.cpp permite mantener el código ordenado, reutilizable y más fácil de mantener. Además, se aprovechan punteros, arrays y referencias, los cuales son esenciales en programación de sistemas como los utilizados en hospitales, donde la eficiencia y claridad son cruciales.

