#include <iostream> 
using namespace std;
int main() {
    float numero_real;
    Float parte_inteira, parte_fracionaria, arredondada;

    cout<<"Digite um numero real";
    cin>>numero_real;

    parte_inteira = static_cast<int>(numero_real);
    parte_fracionaria = numero_real - parte_inteira;        
    arredondada = (parte_fracionaria >= 0.5) ? parte_inteira + 1 : parte_inteira;

    cout<<"\nO numero arredondado é: "<< arredondada;
    cout<<"\nA parte inteira é: "<< parte_inteira;
    cout<<"\nA parte fracionaria é: "<< parte_fracionaria;
    return 0;


}
