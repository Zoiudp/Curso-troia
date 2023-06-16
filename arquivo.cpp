#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Digite sua idade:";
    cin >> idade;

/*
    if (idade >= 18){
        cout << "Voce e maior de 18";
    }else {
        cout <<"Você é menor de idade";
    }
*/

cout <<(idade >=18 ? "Voce e maior de 18 " : "Voce e menor de idade");


    return 0;
}