#include "Cliente.cpp"
#include <iostream>
using namespace std;

main() {
    string nit, nombres, apellidos, dirección;
    int telefono;

    cout << "Ingresar Nit: ";
    cin >> nit;
    cout << "Ingresar Nombres: ";
    cin >> nombres;
    cout << "Ingresar Apellidos: ";
    cin >> apellidos;
    cout << "Ingresar Dirección: ";
    cin >> dirección;
    cout << "Ingresar Teléfono: ";
    cin >> telefono;

    // Instancia de un objeto
    Cliente obj = Cliente(nombres, apellidos, dirección, telefono, nit);
    
    // Mostrar datos iniciales
    obj.mostrar();

    // Ejemplo de uso de Setter para modificar solo el NIT
    cout << "Ingresar Nit a modificar: ";
    cin >> nit;
    obj.setNit(nit);
    
    // Mostrar datos usando Getter individual
    cout << "Datos del Cliente: " << obj.getNit() << " " << obj.getNombres() << endl;

    // Mostrar todos los datos nuevamente
    obj.mostrar();
}
