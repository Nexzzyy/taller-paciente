#include <iostream>
#include <string>

using namespace std;

int main() {

    // Variables
    string nombre;
    string direccion;
    string telefono;
    string correo;

    int edad;
    char genero;
    char estrato;
    double peso;
    double altura;
    bool alergias;
    double imc;


    // DATOS DEL PACIENTE
    

    
    cout << "       SISTEMA DE ADMISION" << endl;
    

    // Datos de texto
    cout << "Ingrese el nombre completo: ";
    getline(cin, nombre);

    cout << "Ingrese la direccion de residencia: ";
    getline(cin, direccion);

    cout << "Ingrese el numero de telefono: ";
    getline(cin, telefono);

    cout << "Ingrese el correo electronico: ";
    getline(cin, correo);

    // Datos numericos
    cout << "Ingrese la edad: ";
    cin >> edad;

    cout << "Ingrese el genero (M/F/O): ";
    cin >> genero;

    cout << "Ingrese el estrato socioeconomico: ";
    cin >> estrato;

    cout << "Ingrese el peso en kg: ";
    cin >> peso;

    cout << "Ingrese la altura en metros: ";
    cin >> altura;

    cout << "Tiene alergias conocidas? (1 = Si, 0 = No): ";
    cin >> alergias;

    
    // CALCULO DEL IMC
    

    imc = peso / (altura * altura);

 
    // CLASIFICACION DEL IMC
    

    string clasificacion;

    if (imc < 18.5) {
        clasificacion = "Bajo peso";
    }
    else if (imc <= 24.9) {
        clasificacion = "Normal";
    }
    else {
        clasificacion = "Sobrepeso";
    }

    
    // MOSTRAR FICHA MEDICA
    

   
    
    cout << "             FICHA MEDICA" << endl;
    

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estrato: " << estrato << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;

    if (alergias) {
        cout << "Alergias: Si" << endl;
    }
    else {
        cout << "Alergias: No" << endl;
    }

    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Correo: " << correo << endl;

    cout << "IMC: " << imc << endl;
    cout << "Clasificacion: " << clasificacion << endl;

   

    return 0;
}