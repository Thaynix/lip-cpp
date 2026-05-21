
#include <iostream>
#define MAX 15

using namespace std;

void ler_elementos_de_array_int(int a[MAX], int n){
    for (int i = 0; i < n ; i++){
        cin >> a[i];
    }
}

void impressar_elementos_de_array_int(int a[MAX], int n){
    for (int i = 0; i < n ; i++){
        cout << a[i] << endl;
    }
}

int main(){
    int a[MAX];
    int n;

    cin >> n;

    ler_elementos_de_array_int(a, n);
    impressar_elementos_de_array_int(a, n);

    return 0;
}
