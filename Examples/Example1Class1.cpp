#include <iostream>

using namespace std;

int main(){
    string nombrePersona;
    string EdadPersona;
    string Nacionalidad;

    cout << "ingrese su nombre: ";
    getline(cin,nombrePersona);
    cout << "ingrese su edad: ";
    getline(cin, EdadPersona);
    cout << "ingrese su pais natal: ";
    getline(cin,Nacionalidad);

    cout << nombrePersona << endl;
    cout << EdadPersona << endl;
    cout << Nacionalidad << endl;

    return 0;
}