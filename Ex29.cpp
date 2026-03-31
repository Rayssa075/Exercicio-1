#include <iostream>

using namespace std;

int main() {
    float numero_real;

    float parte_inteira, parte_fracionaria, arredondada;

    cout << "Digite um numero real: ";
    cin >> numero_real;


    parte_inteira = static_cast<int>(numero_real);


    parte_fracionaria = numero_real - parte_inteira;

    
    arredondada = (parte_fracionaria >= 0.5) ? (parte_inteira + 1) : parte_inteira;

    cout << "\nA parte inteira e: " << parte_inteira;
    cout << "\nA parte fracionaria e: " << parte_fracionaria;
    cout << "\nO numero arredondado e: " << arredondada << endl;

    return 0;
}
