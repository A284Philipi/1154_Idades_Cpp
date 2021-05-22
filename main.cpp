#include <iostream>

using namespace std;

int main()
{
    int cont = 0;
    float idade, soma = 0, dividir = 0;
    while (cont == 0){
        cin >> idade;
        if (idade < 0){
            cont = 1;
        }else{
            soma = soma + idade;
            dividir++;
        }
    }
    idade = soma / dividir;
    cout.precision(2);
    cout << fixed << idade <<endl;
    return 0;
}
