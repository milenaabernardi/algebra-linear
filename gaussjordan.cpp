#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void imprime(const vector<vector<double>>& matriz){
    int linhas = matriz.size();
    int colunas = matriz[0].size();

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
        
            cout << fixed << setprecision(0) << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void GaussJordan(vector<vector<double>>& matriz){
    int linhas = matriz.size();
    int colunas = matriz[0].size();

    cout << "matriz inicial:" << endl;
    imprime(matriz);

    for (int i = 0; i < linhas; i++){
        int pivotRow = i;
        for (int j = i + 1; j < linhas; j++){
            if (matriz[j][i] > matriz[pivotRow][i]){
                pivotRow = j;
            }
        }
        swap(matriz[i], matriz[pivotRow]);

        cout << "pivoteamento parcial (linha " << i + 1 << " trocada com linha " << pivotRow + 1 << "):" << endl;
        imprime(matriz);

        double pivot = matriz[i][i];
        for (int j = 0; j < colunas; j++){
            matriz[i][j] /= pivot;
        }

        cout << "escalonamento (linha " << i + 1 << " dividida por " << pivot << "):" << endl;
        imprime(matriz);

        for (int j = 0; j < linhas; j++){
            if (j != i){
                double factor = matriz[j][i];
                for (int k = 0; k < colunas; k++){
                    matriz[j][k] -= factor * matriz[i][k];
                }
                cout << "eliminacao (linha " << j + 1 << " subtraida de " << factor << " vezes a linha " << i + 1 << "):" << endl;
                imprime(matriz);
            }
        }
    }
}

int main(){
    int n;
    cout << "digite a ordem da matriz quadrada: ";
    cin >> n;

    vector<vector<double>> matriz(n, vector<double>(n));
    cout << "digite os elementos da matriz:" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    GaussJordan(matriz);

    cout << "matriz resultante:" << endl;
   
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(matriz[i][j] == -0){
                matriz[i][j] = 0;
            }
        }
    }
    imprime(matriz);
    return 0;
}