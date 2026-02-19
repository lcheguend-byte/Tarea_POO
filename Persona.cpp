#include <iostream>
using namespace std;

class Persona {
    // Atributos con métodos de acceso protegidos para poder heredarlos
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
