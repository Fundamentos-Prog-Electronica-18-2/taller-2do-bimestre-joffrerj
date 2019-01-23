#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    int num1=0;
    int num2=0;
    int suma;
    int multi;
    int valor = 0;
    int contador = 0;
    ofstream fo;
    bool bandera = true;
    fo.open("datos.txt");
    if (fo.is_open()){

        while(contador<4){
            cout << "Ingrese el primer número: " << endl;
            cin >> num1;
            cout << "Ingrese el segundo número: " << endl;
            cin >> num2;
            suma = (num1+num2);
            multi = (num1*num2);
            fo << num1 << " " << num2 << " --- " << "Suma: " << suma << " --- " << "Multiplicación: " << multi << endl;
            contador = contador + 1;
        }
        fo.close();
    }
    return 0;
}
