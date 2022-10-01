// Multiplicacion de matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Math.h>
#include<windows.h>
using namespace std;

class Calcular {
private:
    int cos;
    int tan;
    int sen;
public:
    Calcular (int _cos, int _tan, int _sen)//INICIANDO VARIABLES
        :cos(_cos), tan(_tan), sen(_sen) {};
    
    void matrix();
    void CST();
};


void Calcular::matrix() {
    int A[100][100]{}, B[100][100]{}, C[100][100]{};
    int f1, f2, c1, c2;


    cout << "Digite el numera de filas de A: ";
    cin >> f1;
    cout << "Digite el numero de columnas A: ";
    cin >> c1;
    cout << "Digite el numera de filas de B: ";
    cin >> f2;
    cout << "Digite el numero de columnas B: ";
    cin >> c2;


    //Imprimir las matrices
    if (c1 == f2) {
        for (int i = 0; i < f1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << "Ingrese el elemento(" << i << "," << j << ") de la primera matrizz" << endl;
                cin >> A[i][j];
            }

            for (int i = 0; i < f2; i++) {
                for (int j = 0; j < c2; j++) {
                    cout << "Ingrese el elemento(" << i << "," << j << ") de la primera matrizz" << endl;
                    cin >> B[i][j];
                }
            }
        }
        cout << endl;
    }

    else
        cout << "No se pueden multiplicar las matrices" << endl;
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << A[i][j] << endl;
        }
        cout << endl;
        for (int i = 0; i < f2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << B[i][j] << endl;
            }
            cout << endl;

        }
    }
}



 int main(){
    int sen = 0, cos = 0, tan = 0, opc = 0;
    Calcular hip (sen,cos,tan);
  
    cout << "\t\t\t\t-Bienvenido-" << endl;
    cout << " 1. Multipilicacion de matriz" << endl;
    cout << " 2. Numero de Cos, Sen, Tan" << endl;
    cin >> opc;

    
        system("cls");
        switch (opc) {
        case 1:
            cout << "Multiplicacion de Matricez" << endl;
            hip.matrix();
            system("cls");
            break;

        case 2:
            cout << "Cos, Sen, Tan de un numero" << endl;
            break;
        }

}

