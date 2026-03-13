#include <iostream>
using namespace std;

// Clase base
class Vehiculo{
public:
	//Atributos
    string marca;
    string modelo;
    
    //Metodo para mostrar la informacion 
    void mostrarInfo(){
        cout << "Marca: " << marca << endl; //Muestra la marca del vehiculo
        cout << "Modelo: " << modelo << endl; //Muestra el modelo del vehiculo
    }
    
    //Metodo virtual para polimorfismo 
    virtual void encender(){
        cout << "El vehiculo esta encendido" << endl;
    }
};

// Clase hija 1
class Auto : public Vehiculo{
public:
    int numeroPuertas; //Atributo de auto
    
    //Metodo virtual
    void encender(){
        cout << "El vehiculo esta apagado" << endl;
    }
};

// Clase hija 2
class Moto : public Vehiculo{
public:
    int cilindraje; //Atributo de moto
    
    //Metodo virtual
    void encender(){
        cout << "La moto esta apagada" << endl;
    }
};

int main(){

//Objeto de tipo auto
    Auto a1;
    a1.marca = "Suzuki";
    a1.modelo = "Grand Vitara";
    a1.numeroPuertas = 4;

    cout << "Auto:" << endl;
    a1.mostrarInfo(); //Muestra la marca y el modelo
    cout << "Puertas: " << a1.numeroPuertas << endl; //Muestra el numero de puertas
    a1.encender(); //Metodo virtual, polimorfismo

    cout << endl;

//Objeto de tipo moto
    Moto m1;
    m1.marca = "Honda";
    m1.modelo = "Rebel";
    m1.cilindraje = 150;

    cout << "Moto:" << endl;
    m1.mostrarInfo(); //Muestra la marca y el modelo
    cout << "Cilindraje: " << m1.cilindraje << endl; // Muestra el cilindraje 
    m1.encender(); //Metodo virtual, polimorfismo

    return 0;
}
