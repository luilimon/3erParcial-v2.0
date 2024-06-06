#include <iostream>
using namespace std;
int main() {
    int opcion;
    float base, altura, base_mayor, base_menor, area;

    cout << "CALCULO DE AREAS\n";
    cout << "1. Calcular el area de un triangulo\n";
    cout << "2. Calcular el area de un trapecio\n";
    cout << "3. Calcular el area de un rectangulo\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El area del triangulo es: " << area << "\n";
            break;
        case 2:
            cout << "Ingrese la base mayor del trapecio: ";
            cin >> base_mayor;
            cout << "Ingrese la base menor del trapecio: ";
            cin >> base_menor;
            cout << "Ingrese la altura del trapecio: ";
            cin >> altura;
            area = ((base_mayor + base_menor) * altura) / 2;
            cout << "El area del trapecio es: " << area << "\n";
            break;
        case 3:
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            area = base * altura;
            cout << "El area del rectangulo es: " << area << "\n";
            break;
        default:
            cout << "Opcion no valida\n";
            break;
    }

    return 0;
}
