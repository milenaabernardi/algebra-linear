#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int i, j, k;
    int l1, c1, l2, c2;

    cout << "digite o tamanho da primeira matriz" << endl;
    cout << "linhas: ";
    cin >> l1;
    cout << "colunas: ";
    cin >> c1;

    cout << "digite o tamanho da segunda matriz" << endl;
    cout << "linhas: ";
    cin >> l2;
    cout << "colunas: ";
    cin >> c2;

    if (c1 != l2) {
        cout << "multiplicacao de matrizes nao e possivel. o numero de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz." << endl;
        return 1;
    }

    int m1[l1][c1];
    int m2[l2][c2];
    int m3[l1][c2];

    cout << "digite a primeira matriz: " << endl;
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "digite a segunda matriz: " << endl;
    for (i = 0; i < l2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }

    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            m3[i][j] = 0;
            for (k = 0; k < c1; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    system("clear||cls");

    cout << "matriz 1: " << endl;
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c1; j++) {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "matriz 2: " << endl;
    for (i = 0; i < l2; i++) {
        for (j = 0; j < c2; j++) {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "multiplicacao das matrizes: " << endl;
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}