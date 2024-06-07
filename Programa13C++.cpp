#include <iostream>
using namespace std;

int main() {
    int numero;

    cout<<"Ingresa  un numero: ";
    cin>>numero;
    if (numero%2==0) {
        cout<<"Este numero es numero par"<<endl;
        if (numero%3==0) {
            cout<<"Este numero si es multiplo de 3"<<endl;
        } else {
            cout<<"Este numero no es multiplo de 3"<<endl;
        }
    } else {
        cout<<"Este numero es numero impar."<<endl;
    }

    return 0;
}
