#include <iostream>
using namespace std;
#define MAX 100

void ler_num(int a[MAX], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void print_num(int a[MAX], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

bool impar_ou_par(int num){ // bool retorna true ou false, é importante colocar os dois returns
    if (num % 2 == 0){
        return true;
    }
    return false;
}


int main(){
    int a[MAX];
    int n;

    cin >> n;

    ler_num(a, n);
    print_num(a, n);

    int qtd_par = 0;
    int qtd_impar = 0;

    for (int i = 0; i < n; i++){
        if (impar_ou_par(a[i])){ // nao precisa chamar a funcao bool pq ja estou chamando ela dentro do if
            qtd_par++;
        } else {
            qtd_impar++;
        }
    }

    cout << "quantidade de num par: " << qtd_par << endl;
    cout << "quantidade de num impar: " << qtd_impar << endl;


    return 0;

}
