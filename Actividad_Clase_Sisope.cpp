#include <iostream>
#include <string.h>
using namespace std;

void actividad1(){
    int val1 = 10;
    int* puntero = &val1;
    cout << "Valor de la variable: " << val1 << endl; 
    cout << "Direccion de memoria de la variable: " << puntero << endl;
    *puntero = 20;
    cout << "Valor de la variable modificado: " << val1 << endl;
    cout << "Direccion de memoria de la variable: " << puntero << endl;
};

void actividad2(){
    int val2 = 10;
    int* puntero2 = &val2;
    cout << "Valor de la variable: " << val2 << endl; 
    *puntero2 = 29;
    cout << "Valor de la variable modificado por puntero: " << val2 << endl;
    int& referencia = val2;
    referencia = 203;
    cout << "Valor de la variable modificado por referencia: " << val2 << endl;
    cout << "Direccion de memoria del puntero: " << puntero2 << endl;
    cout << "Direccion de memoria de la referencia: " << &referencia << endl;
};

void actividad3(){
    int arreglo[] = {10,12,8,4,5};
    int* puntero = arreglo;
    int sizeArr = sizeof(arreglo) / sizeof(arreglo[0]);
    //cout << "Arreglo original: " << endl;
    //cout << arreglo;
    cout << "Arreglo sin modificar:" << endl;
    for (int i = 0; i < sizeArr; i++){
        cout << *(puntero + i) << " ";
    };
    
    for (int i = 0; i < sizeArr; i++){
        *(puntero + i) += 10;
    };

    cout << "\nArreglo modificado:" << endl;
    for (int i = 0; i < sizeArr; i++){
        cout << *(puntero + i) << " ";
    };
    cout << "\nDireccion de memoria del array: " << arreglo << endl;
    cout << "Direccion de memoria del puntero: " << puntero << endl;
};

void actividad4(){
    int filas, columnas;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    int** matriz = new int*[filas];  // Crea un arreglo de punteros
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas]; 
    }

    cout << "\nIngrese los valores para la matriz:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
};

int main() {
    //actividad1();
    //actividad2();
    //actividad3();
    actividad4();
    return 0;
}
