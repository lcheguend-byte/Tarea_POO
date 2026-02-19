#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
    // Atributo propio de la clase cliente
    private: 
        string nit;

    // Constructor
    public:
        Cliente() {
        }
        Cliente(string nom, string ape, string dir, int tel, string n) : Persona(nom, ape, dir, tel) {
            nit = n;
        }

        // MÉTODOS GET Y SET (Encapsulamiento)
        // Setters para modificar
        void setNit(string n) { nit = n; }
        void setNombres(string nom) { nombres = nom; }
        void setApellidos(string ape) { apellidos = ape; }
        void setDireccion(string dir) { dirección = dir; }
        void setTelefono(int tel) { telefono = tel; }

        // Getters para mostrar
        string getNit() { return nit; }
        string getNombres() { return nombres; }
        string getApellidos() { return apellidos; }
        string getDireccion() { return dirección; }
        int getTelefono() { return telefono; }

        // Método Mostrar (Polimorfismo)
        void mostrar() {
            cout << "______________________" << endl;
            cout << nit << ", " << nombres << ", " << apellidos << ", " << dirección << ", " << telefono << endl;
        }
};
