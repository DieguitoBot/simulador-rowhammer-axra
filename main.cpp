#include <iostream>
#include <cstdlib>
#include <ctime>
#include "memoria.h"
using namespace std;

int main(){
    srand(time(NULL));

    int filas=4;
    int columnas=8;

    int** memoria=crearMemoria(filas,columnas);

    llenarMemoria(memoria,filas,columnas);

    cout<<"--- MEMORIA DRAM SIMULADA ---"<<endl;
    mostrarMemoria(memoria,filas,columnas);

    liberarMemoria(memoria,filas);

    return 0;
}