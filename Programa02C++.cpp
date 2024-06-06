#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout<<"Dame el primer numero ";
    cin>>num1;
    cout<<"Dame el segundo numero ";
    cin>>num2;
    if (num1==num2) {
        cout<<"Los numeros son iguales"<<endl;
    } else if (num1>num2) {
        cout<<"El primer numero es mayor que el segundo"<<endl;
    } else {
        cout<<"El segundo numero es mayor que el primero"<<endl;
    }

    return 0;
}
