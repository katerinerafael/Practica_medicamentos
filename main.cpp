#include <iostream>
#include "medicamento.h"

using namespace std;

int main() {
    Medicamento inventario[10];

    // Crear 10 medicamentos
    inventario[0].SetDatos(1, "Paracetamol", 100);
    inventario[1].SetDatos(2, "Ibuprofeno", 200);
    inventario[2].SetDatos(3, "Amoxicilina", 150);
    inventario[3].SetDatos(4, "Loratadina", 120);
    inventario[4].SetDatos(5, "Omeprazol", 180);
    inventario[5].SetDatos(6, "Salbutamol", 90);
    inventario[6].SetDatos(7, "Metformina", 300);
    inventario[7].SetDatos(8, "Losartán", 250);
    inventario[8].SetDatos(9, "Cetirizina", 175);
    inventario[9].SetDatos(10, "Diclofenaco", 130);

    // Asignar precios a los medicamentos
    for (int i = 0; i < 10; i++) {
        inventario[i].SetPrecio(0, 1.0f + i);       // Precio base
        inventario[i].SetPrecio(1, 1.5f + i * 0.5); // Precio alternativo
    }

    cout << "\n--- INVENTARIO INICIAL ---\n";
    for (int i = 0; i < 10; i++) {
        inventario[i].Mostrar();
    }

    // Actualizar usando referencia
    int nuevaCantidad = 999;
    cout << "\n>>> Actualizando cantidad del medicamento 3 por referencia (ID: 4)\n";
    inventario[3].ActualizarCantidadPorReferencia(nuevaCantidad);
    inventario[3].Mostrar();

    // Actualizar usando puntero
    int nuevaCantidad2 = 555;
    cout << "\n>>> Actualizando cantidad del medicamento 5 por puntero (ID: 6)\n";
    inventario[5].ActualizarCantidadPorPuntero(&nuevaCantidad2);
    inventario[5].Mostrar();

    // Comparar medicamentos
    cout << "\n>>> Comparando medicamentos\n";
    if (inventario[0].CompararPorReferencia(inventario[1])) {
        cout << "Medicamento 1 y 2 son iguales (por referencia)\n";
    } else {
        cout << "Medicamento 1 y 2 son diferentes (por referencia)\n";
    }

    if (inventario[1].CompararPorPuntero(&inventario[1])) {
        cout << "Medicamento 2 comparado consigo mismo (por puntero): iguales\n";
    }

    // Intercambio de cantidades usando punteros
    cout << "\n>>> Intercambio de cantidades entre medicamento 7 y 8 (por puntero)\n";
    int c1 = 2000, c2 = 5000;
    cout << "Antes -> c1: " << c1 << ", c2: " << c2 << endl;
    intercambiar(&c1, &c2);
    cout << "Después de intercambio (puntero) -> c1: " << c1 << ", c2: " << c2 << endl;

    // Intercambio de cantidades usando referencias
    intercambiarReferencia(c1, c2);
    cout << "Después de intercambio (referencia) -> c1: " << c1 << ", c2: " << c2 << endl;

    // Buscar precio específico con punteros
    cout << "\n>>> Buscando precio 6.0 en el inventario\n";
    for (int i = 0; i < 10; i++) {
        if (inventario[i].CompararPrecio(6.0f)) {
            cout << "Medicamento con ID " << i + 1 << " tiene un precio 6.0\n";
        }
    }

    return 0;
}
