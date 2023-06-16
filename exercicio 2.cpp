#include <iostream>
using namespace std;

int main(){
    int numero; 
    cout << "Insira um numero: ";
    cin >> numero;

    cout << "Os valores pares sao " << endl;
    for (int i = 0; i <= numero; i++){
        if (i%2 == 0){
            cout<< i << endl;
        }
        
    }
    
}