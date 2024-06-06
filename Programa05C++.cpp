#include <iostream>
using namespace std;

int main() {
    float horasTrabajadas, precioPorHoras, salarioSemanal;

    cout<<"Dame horas trabajadas de esta semana: ";
    cin>>horasTrabajadas;

    cout<<"Dame el precio por hora: ";
    cin>>precioPorHoras;

    if (horasTrabajadas <= 40) {
        salarioSemanal = horasTrabajadas * precioPorHoras;
    } else {
        salarioSemanal = 40 * precioPorHoras + (horasTrabajadas - 40) * (1.5 * precioPorHoras);
    }

    cout<<"El salario semanal es: $"<<salarioSemanal<<endl;

    return 0;
}
