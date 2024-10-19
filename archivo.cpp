#include <iostream>
#include <fstream>

using namespace std; 

int main(){

    int x = 0, i = 1, ci;
    char name [100], correo[100];

    ofstream output("../data/data.txt");

    if (!output.is_open()){
        cout << "No se puede abrir ni crear el archivo" << endl;
        return 0;
    }

    cout << "Los datos de cuantas personas va a ingresar?" << endl;
    cin >> x;

    while(x>0){
        cout << "Persona #" << i << endl;
        cout << "Nombre: ";
        cin >> name;
        cout << "Cedula: ";
        cin >> ci;
        cout << "Correo: ";
        cin >> correo;

        output << name << " " << ci << " " << correo << endl;

        i++;
        x--;
    }

    return 0;
}