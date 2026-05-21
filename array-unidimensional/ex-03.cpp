#include <iostream>
#define MAX 10
using namespace std;

void ler_num(int a[MAX], int n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void print_num(int a[MAX], int n){
    for (int i = n-1; i >= 0; i--){ //n-1 é pra começar pelo numero maior *cara de tadinha*, e q é pra começar se o numero foi maior ou igual a 0, o i-- é um decremento
        cout << a[i];
    }
}

int main(){
    int a[MAX];
    int n;

    cin >> n;

    ler_num(a, n);
    print_num(a, n);


    return 0;
}
