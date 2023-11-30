#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int i, j;
    int l, c;

    cout << "digite o tamanho das matrizes" << endl;
    cout << "linha: ";
    cin >> l;
    cout << "coluna: ";
    cin >> c;

    int m1[l][c] = {0};
    int m2[l][c] = {0};
    int m3[l][c] = {0};

    cout << "digite a primeira matriz: " << endl;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "digite a segunda matriz: " << endl;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            cin >> m2[i][j];
        }
    }

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }

    system("clear||cls");

    cout << "a matriz: " << endl;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "subtracao da matriz: " << endl;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "e igual a matriz: " << endl;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
}