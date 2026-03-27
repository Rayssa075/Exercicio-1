#include <iostream>
using namespace std; 
int main() {
    float bruto, percentual, imposto, liquido;
    cout<< "digite o valor do seu salario bruto e a percentual de imposto ";
    cin>> bruto >> percentual;
    imposto = ( percentual / 100) * bruto;
    liquido = bruto - imposto;
    cout<< "O valor do imposto é: " << imposto << "O valor do salario liquido é: " << liquido;
    
   return 0;
}
