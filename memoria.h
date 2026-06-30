#ifndef MEMORIA_H
#define MEMORIA_H

int** crearMemoria(int filas,int columnas);
void llenarMemoria(int** memoria,int filas,int columnas);
void mostrarMemoria(int** memoria,int filas,int columnas);
void liberarMemoria(int** memoria,int filas);

#endif