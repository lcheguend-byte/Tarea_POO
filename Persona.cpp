#include <iostream>
using namespace std;

class Persona {
    // Atributos 
    protected: 
        string nombres, apellidos, dirección;
        int telefono;

    // Constructor
    protected: 
        Persona() {
        }
        Persona(string nom, string ape, string dir, int tel) {
            nombres = nom;
            apellidos = ape;
            dirección = dir;
            telefono = tel;
        }

    // Método mostrar
    void mostrar();
};
