#include <iostream>
#include <vector>
using namespace std;

//Clase Estudiante
class Estudiante {
public:
    int id;
    string nombre;
    string carrera;
    float nota;
};

//Vector
vector<Estudiante> lista;

//Registrar estudiante
void registrar() {
    Estudiante e;
    cout << "ID: ";
	cin >> e.id;
    cout << "Nombre: ";
	cin >> e.nombre;
    cout << "Carrera: ";
	cin >> e.carrera;

    cout << "Nota: ";
    cin >> e.nota;

    while(e.nota < 0 || e.nota > 10) {
        cout << "Error en la nota que se quiere registrar. Ingrese una nota entre 0 y 10: ";
        cin >> e.nota;
    }

    lista.push_back(e);
    cout << "Estudiante registrado." << endl;
}

//Mostrar estudiantes
void mostrar() {

    if(lista.empty()) {
        cout << "No hay estudiantes en el registro." << endl;
        return;
    }

    cout << endl;
    cout << "Lista de Estudiantes" << endl;

    for(int i = 0; i < lista.size(); i++) {
        cout << i+1 << "| ID: " << lista[i].id
             << "| Nombre: " << lista[i].nombre
             << "| Carrera: " << lista[i].carrera
             << "| Nota: " << lista[i].nota << endl;
    }

}

//Buscar estudiante
void buscar() {
    int id;
    char repetir;

    do {
        cout << "ID que se quiere buscar: ";
		cin >> id;
        bool encontrado = false;

        for(int i = 0; i < lista.size(); i++) {
            if(lista[i].id == id) {

                cout << endl;
                cout << "Estudiante encontrado" << endl;
                cout << "Nombre: " << lista[i].nombre << endl;
                cout << "Carrera: " << lista[i].carrera << endl;
                cout << "Nota: " << lista[i].nota << endl;

                encontrado = true;
                break;
            }
        }

        if(!encontrado) {
            cout << "Estudiante no encontrado." << endl;
            cout << "Desea volver a intentar? (s/n): ";
            cin >> repetir;
        } else {
            repetir = 'n';
        }

    } while(repetir == 's' || repetir == 'S');
}

//Modificar datos 
void modificar() {
    int id;
    char repetir;

    do {
        cout << "ID que quiere modificar: ";
		cin >> id;
        bool encontrado = false;

        for(int i = 0; i < lista.size(); i++) {

            if(lista[i].id == id) {

                cout << "Nuevo nombre: ";
                cin >> lista[i].nombre;

                cout << "Nueva carrera: ";
                cin >> lista[i].carrera;

                cout << "Nueva nota: ";
                cin >> lista[i].nota;

                while(lista[i].nota < 0 || lista[i].nota > 10) {
                    cout << "Error en la nots que quiere registar. Ingrese una nota entre 0 y 10: ";
                    cin >> lista[i].nota;
                }

                cout << "Datos modificados." << endl;
                encontrado = true;
                break;
            }
        }

        if(!encontrado) {
            cout << "Estudiante no encontrado." << endl;
            cout << "Desea volver a intentar? (s/n): ";
            cin >> repetir;
        } else {
            repetir = 'n';
        }

    } while(repetir == 's' || repetir == 'S');
}

//Eliminar estudiante
void eliminar() {
    int id;
    cout << "ID que quiere eliminar: ";
	cin >> id;

    for(int i = 0; i < lista.size(); i++) {

        if(lista[i].id == id) {
            lista.erase(lista.begin() + i);
            cout << "Registro eliminado." << endl;
            return;
        }
    }

    cout << "Estudiante no encontrado." << endl;
}

//Reporte final
void reporte() {

    if(lista.size() == 0) {
        cout << "No hay estudiantes registrados." << endl;
        return;
    }

    float suma = 0;
    float mayor = lista[0].nota;
    float menor = lista[0].nota;

    for(int i = 0; i < lista.size(); i++) {

        suma += lista[i].nota;

        if(lista[i].nota > mayor) {
            mayor = lista[i].nota;
        }

        if(lista[i].nota < menor) {
            menor = lista[i].nota;
        }
    }

    cout << endl;
    cout << " Reporte " << endl;
    cout << "Numero total de estudiantes registrados: " << lista.size() << endl;
    cout << "Promedio general del curso: " << suma / lista.size() << endl;
    cout << "Nota mas alta: " << mayor << endl;
    cout << "Nota mas baja: " << menor << endl;
    cout << "=========================" << endl;
}

//Diez registros
void datosIniciales() {

    Estudiante e;

    e.id = 1;
	e.nombre = "Daniela";
	e.carrera = "Software";
	e.nota = 8.5;
	lista.push_back(e);
    e.id = 2;
	e.nombre = "Luis";
	e.carrera = "Software";
	e.nota = 7.0;
	lista.push_back(e);
    e.id = 3;
	e.nombre = "Diego";
	e.carrera = "Software";
	e.nota = 9.3;
	lista.push_back(e);
    e.id = 4;
	e.nombre = "Samantha";
	e.carrera = "Software";
	e.nota = 7.2;
	lista.push_back(e);
    e.id = 5;
	e.nombre = "Alejandro";
	e.carrera = "Software";
	e.nota = 6.1;
	lista.push_back(e);
    e.id = 6;
	e.nombre = "Matheo";
	e.carrera = "Software";
	e.nota = 5.8;
	lista.push_back(e);
    e.id = 7;
	e.nombre = "Genesis";
	e.carrera = "Software";
	e.nota = 8.0;
	lista.push_back(e);
    e.id = 8;
	e.nombre = "Justin";
	e.carrera = "Software"; 
	e.nota = 5.0; 
	lista.push_back(e);
    e.id = 9;
	e.nombre = "Pablo";
	e.carrera = "Software";
	e.nota = 7.0;
	lista.push_back(e);
    e.id = 10;
	e.nombre = "Josselyn";
	e.carrera = "Software";
	e.nota = 8.8;
	lista.push_back(e);
}

int main() {

    datosIniciales();

    int opcion;

    do {

        cout << endl;
        cout << " Menu" << endl;
        cout << "1. Registrar" << endl;
        cout << "2. Mostrar" << endl;
        cout << "3. Buscar" << endl;
        cout << "4. Modificar" << endl;
        cout << "5. Eliminar" << endl;
        cout << "6. Reporte" << endl;
        cout << "7. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1: registrar();
			break;
            case 2: mostrar();
			break;
            case 3: buscar();
			break;
            case 4: modificar();
			break;
            case 5: eliminar();
			break;
            case 6: reporte();
			break;

            default:
                if(opcion != 7)
                cout << "No se encuentra el numero de su opcion, intente de nuevo." << endl;
        }

    } while(opcion != 7);

    return 0;
}
