#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string nombres;
    string apellidos;
    int valor = 0;
    ofstream fo;
    bool bandera = true;
    fo.open("mifichero.txt");
    if (fo.is_open()){

        while(bandera == true){
            cout << "Ingrese su nombre: " << endl;
            cin >> nombres;
            cout << "Ingrese su apellido: " << endl;
            cin >> apellidos;
            fo << nombres << " " << apellidos << endl;

            cout << "¿Quiere agregar más información? SI(1) - NO(2)" << endl;
            cin >> valor;
            //if(valor==1){
            //    bandera = true;
            //}else{
            //    bandera = false;
            // }
            if(valor!=1){
                bandera = false;
            }
        }
        fo.close();
    }
    return 0;
}
