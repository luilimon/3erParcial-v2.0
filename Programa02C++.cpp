#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa tu segundo numero: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "Los numeros son iguales." << std::endl;
    } else if (num1 > num2) {
        cout << "El primer numero es mayor que el segundo." << std::endl;
    } else {
        cout << "El segundo numero es mayor que el primero." << std::endl;
    }

    return 0;
}
