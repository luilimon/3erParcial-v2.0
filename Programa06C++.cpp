#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"introduzca un numero de la baraja espanola\n";
    cin>>num;
    switch(num){
        case 1:
              cout<<"as";
              break;
        case 10:
            cout<<"sota";
        case 11:
            cout<<"caballo";
          break;
        case 12:
            cout<<"rey";
          break;
     default:
        if(num>=2 && num<=9){
            cout<<"No es figura y tampoco es as";
        }else if (num>12){
            cout<<"este numero no es parte de la baraja espanola";
        }
          break;
    }
    return 0;
}
