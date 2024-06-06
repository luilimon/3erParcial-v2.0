#include <iostream>
using namespace std;
int main() {
    int hora;
    cout << "Ingrese la hora del dia: ";
    cin >> hora;

    if (hora > 18) {
        cout << "Buenas noches.\n";
    } else if (hora > 12) {
        cout << "Buenas tardes.\n";
    } else {
        cout << "Buenos dias.\n";
    }

    return 0;
}
