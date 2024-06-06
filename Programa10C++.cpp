#include <iostream>
using namespace std;
int main()
{
    int i, n, co, ac;
    co = 0;
    ac = 0;
    do
    {
        cout << "Introduzca un numero: ";
        cin >> n;
        cout << "Has introducido el numero " << n << std::endl;
        ac = ac + n;
        co = co + 1;
    } while (n > 0);
    cout << "Has introducido " << co << " numeros" << std::endl;
    cout << "La suma de los numeros es " << ac << std::endl;

    return 0;
}
