#include <iostream>
using namespace std;
const float Precio_entrada = 70.0;

int main() {
    int edad;
    float precio_final;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 5) {
        precio_final = Precio_entrada * 0.4;
    } else if (edad > 60) {
        precio_final = Precio_entrada * 0.45;
    } else {
        precio_final = Precio_entrada;
    }

    cout << "El precio de la entrada es: " << precio_final << " pesos" << endl;

    return 0;
}
