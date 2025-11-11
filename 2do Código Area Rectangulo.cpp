//2do Código Area de un Rectangulo

#include <iostream>
using namespace std;

int main() {

    float base;
    cout << "Cual es la base del rectangulo: ";
    cin >> base;

    float altura;
    cout << "Cual es la altura del rectangulo: ";
    cin >> altura;

    float area = base * altura;

    cout << "El area del rectangulo es: " << area << endl;

    return 0;
}