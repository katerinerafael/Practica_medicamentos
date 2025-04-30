#include <iostream>
#include <cstring>
#include "medicamento.h"

using namespace std;

// Constructor: inicializa los valores del objeto
Medicamento::Medicamento() {
    id = 0;
    strcpy(nombre, "SinNombre");
    cantidad = 0;

    // Inicializa todos los precios a cero
    for (int i = 0; i < 5; i++) {
        precios[i] = 0.0;
    }
}

// Asigna datos al medicamento
void Medicamento::SetDatos(int pId, const char* pNombre, int pCantidad) {
    id = pId;
    strncpy(nombre, pNombre, sizeof(nombre) - 1); // Copia segura del nombre
    cantidad = pCantidad;
}

// Asigna un precio a una posición del arreglo de precios
void Medicamento::SetPrecio(int pos, float precio) {
    if (pos >= 0 && pos < 5) {
        precios[pos] = precio;
    }
}

// Devuelve el precio guardado en una posición del arreglo
float Medicamento::GetPrecio(int pos) const {
    if (pos >= 0 && pos < 5) {
        return precios[pos];
    }
    return -1;
}

// Muestra todos los datos del medicamento
void Medicamento::Mostrar() const {
    cout << "ID: " << id << ", Nombre: " << nombre 
         << ", Cantidad: " << cantidad << ", Precios: ";
    for (int i = 0; i < 5; i++) {
        cout << precios[i] << " ";
    }
    cout << endl;
}

// Compara si alguno de los precios del medicamento coincide con un valor dado
bool Medicamento::CompararPrecio(float valor) const {
    for (int i = 0; i < 5; i++) {
        if (precios[i] == valor)
            return true;
    }
    return false;
}

// Retorna el ID del medicamento
int Medicamento::GetID() const {
    return id;
}

// Permite actualizar la cantidad en inventario
void Medicamento::ActualizarCantidad(int nuevaCantidad) {
    cantidad = nuevaCantidad;
}

// Intercambia dos valores usando punteros
// Accede a los valores originales mediante su dirección de memoria
void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Intercambia dos valores usando referencias
void intercambiarReferencia(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
