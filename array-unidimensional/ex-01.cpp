#include <iostream>
#define MAX 10

using namespace std;

void ler_notas(double a[MAX], double n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void impressar_notas(double a[MAX], double n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){

    double a[MAX];
    int n;

    cin >> n;

    ler_notas(a, n);
    impressar_notas(a, n);

    double soma = 0;

    for (int i = 0; i < n; i++){
        soma = soma + a[i];
    }

    cout << soma << endl ;

    double media = soma/n;
    cout << media << endl;
    int qtd_abaixo_media = 0;

    for (int i = 0; i < n; i++){
        if (a[i] < 6){
            qtd_abaixo_media++;
        }
    }

    cout << qtd_abaixo_media << endl;

    return 0;
}
