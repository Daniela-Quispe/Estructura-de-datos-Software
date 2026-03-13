#include <iostream>
using namespace std;

class Libro {
public:
    string titulo;
    string autor;

    void mostrar() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
    }
};

int main() {
    Libro l1;
    l1.titulo = "Escuela de Ladronzuelos";
    l1.autor = "Daniela Quispe"; 

    l1.mostrar();

    return 0;
}
