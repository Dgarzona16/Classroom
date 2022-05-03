#include <iostream>

using namespace std;

int main(){
    float numeroA, numeroB, resultado;

    cout << "ingrese un numero: ";
    cin >> numeroA;
    cout << "ingrese otro numero: ";
    cin >> numeroB;

    resultado = (numeroA + numeroB)/(numeroA * numeroB);

    cout << resultado << endl;
    return 0;
}