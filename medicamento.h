#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#define MAX_MEDICAMENTOS 100

#include <string>

// Clase que representa un medicamento
class Medicamento {
private:
    int id; // ID único del medicamento
    char nombre[30]; // Nombre del medicamento
    int cantidad; // Cantidad disponible en inventario
    float precios[5]; // Precios por proveedor/presentación

public:
    // Constructor por defecto
    Medicamento();

    // Configura los datos principales del medicamento
    void SetDatos(int pId, const char* pNombre, int pCantidad);

    // Establece un precio en una posición específica del arreglo
    void SetPrecio(int pos, float precio);

    // Retorna el precio en una posición del arreglo
    float GetPrecio(int pos) const;

    // Muestra en consola los datos del medicamento
    void Mostrar() const;

    // Compara si algún precio coincide con un valor dado
    bool CompararPrecio(float valor) const;

    // Devuelve el ID del medicamento
    int GetID() const;

    // Actualiza la cantidad disponible
    void ActualizarCantidad(int nuevaCantidad);
};

// Intercambia valores usando punteros (por dirección de memoria)
void intercambiar(int *a, int *b);

// Intercambia valores usando referencias
void intercambiarReferencia(int &a, int &b);

#endif
