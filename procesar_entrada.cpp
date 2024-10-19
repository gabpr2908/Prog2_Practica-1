#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int ci;
    char name[100], correo[100];

    ifstream input("../data/data.txt");

    if (!input.is_open()){
        cout << "No se puede abrir" << endl;
        return 0;
    }

    while (input >> name>>ci>>correo){
        cout << "Mi nombre es " << name << ", numero de cedula: " << ci << ", mi correo es " << correo << endl;
    }

    input.close();

    return 0;
}