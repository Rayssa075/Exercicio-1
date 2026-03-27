#include <iostream>
using namespace std; 
int main() {
    float saldo, cheque1, cheque2, taxa1, taxa2, salario;
    cout<< "digite o valor do seu salario, do cheque 1, cheque 2 ";
    cin>> salario >> cheque1 >> cheque2;
    taxa1 = cheque1 * 0.0038;
    taxa2= cheque2 * 0.0038;
    saldo = salario + cheque1 - taxa1 + cheque2 - taxa2;
    cout<< "O valor do seu saldo atual é: " << saldo;
    
   return 0;
}
