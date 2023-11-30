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
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            cin >> m1[j][i];
        }
    }

    cout << "digite a segunda matriz: " << endl;
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            cin >> m2[j][i];
        }
    }

    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            m3[j][i] = m1[j][i] + m2[j][i];
        }
    }
    system("clear||cls");
    
    cout << "a matriz: " << endl;
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            cout << m1[j][i];
            cout << " ";
        }
        cout << endl;
    }

    cout << "somada com a matriz: " << endl;
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            cout << m2[j][i];
            cout << " ";
        }
        cout << endl;
    }

    cout << "e igual a matriz: " << endl;
    for (i=0; i<l; i++){
        for (j=0; j<c; j++){
            cout << m3[j][i];
            cout << " ";
        }
        cout << endl;
    }
}