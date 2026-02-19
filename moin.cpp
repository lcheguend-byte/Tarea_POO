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

    // instancia de un objeto
    Cliente obj = Cliente(nombres, apellidos, dirección, telefono, nit);
    obj.mostrar();
    
}
