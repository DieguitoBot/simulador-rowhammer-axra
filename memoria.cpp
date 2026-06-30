#include <iostream>
#include <cstdlib>
#include "memoria.h"
using namespace std;

int** crearMemoria(int filas,int columnas){
    int** memoria=new int*[filas];

    for(int i=0;i<filas;i++){
        memoria[i]=new int[columnas];
    }

    return memoria;
}

void llenarMemoria(int** memoria,int filas,int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            memoria[i][j]=rand()%2;
        }
    }
}

void mostrarMemoria(int** memoria,int filas,int columnas){
    for(int i=0;i<filas;i++){
        cout<<"Fila "<<i<<": ";
        for(int j=0;j<columnas;j++){
            cout<<memoria[i][j];
        }
        cout<<endl;
    }
}

void liberarMemoria(int** memoria,int filas){
    for(int i=0;i<filas;i++){
        delete[] memoria[i];
    }

    delete[] memoria;
}