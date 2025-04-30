#include <iostream>
#include "medicamento.h"

using namespace std;

int main() {
    // Creamos un arreglo de objetos tipo Medicamento
    Medicamento inventario[MAX_MEDICAMENTOS];

    // Número total de medicamentos registrados
    int total = 3;

    // Inicializamos 3 medicamentos con datos ficticios
    inventario[0].SetDatos(101, "Paracetamol", 100);
    inventario[0].SetPrecio(0, 1.25);
    inventario[0].SetPrecio(1, 1.30);

    inventario[1].SetDatos(102, "Amoxicilina", 50);
    inventario[1].SetPrecio(0, 3.50);
    inventario[1].SetPrecio(1, 3.60);

    inventario[2].SetDatos(103, "Ibuprofeno", 200);
    inventario[2].SetPrecio(0, 2.25);
    inventario[2].SetPrecio(1, 2.40);

    cout << "\n--- Inventario Inicial ---\n";
    for (int i = 0; i < total; i++) {
        inventario[i].Mostrar();
    }

    // Uso de arreglo simple para almacenar cantidades
    int cantidades[3] = {100, 50, 200};

    // Declaramos un puntero a entero y lo apuntamos al arreglo
    int *pCantidades = cantidades;

    // Accedemos a los elementos usando aritmética de punteros
    cout << "\nMostrando cantidades con puntero: ";
    for (int i = 0; i < total; i++) {
        cout << *(pCantidades + i) << " ";
    }
    cout << endl;

    // Mostramos el valor y la dirección de memoria con punteros
    cout << "\nDirección del primer elemento del arreglo: " << pCantidades << endl;
    cout << "Valor del primer elemento usando puntero: " << *pCantidades << endl;

    // Intercambio usando punteros
    cout << "\nIntercambiando cantidades del medicamento 1 y 2 usando punteros\n";
    intercambiar(&cantidades[0], &cantidades[1]);

    // Actualizamos el inventario con las nuevas cantidades
    inventario[0].ActualizarCantidad(cantidades[0]);
    inventario[1].ActualizarCantidad(cantidades[1]);

    // Verificamos cambios
    inventario[0].Mostrar();
    inventario[1].Mostrar();

    // Intercambio usando referencias (más limpio en C++)
    cout << "\nIntercambio por referencia:\n";
    int x = 10, y = 20;
    cout << "Antes: x = " << x << ", y = " << y << endl;
    intercambiarReferencia(x, y);
    cout << "Después: x = " << x << ", y = " << y << endl;

    return 0;
}
