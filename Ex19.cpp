#include <iostream>
using namespace std; 
int main() {

    const float CPMF = 0.0038;

    float salario;
    cout<<"Digite o valor do salatio depositado";
    cin>> salario;

    float saldo_atual

    float cheque1;
    cput<<"Digite o valor do primeiro cheque";
    cin>> cheque1;

    float cheque2;
    cout<<"Digite o valor do segundo cheque";
    cin>> cheque2;
    
    float taxa1= cheque1 * CPMF;
    float taxa2= cheque2 * CPMF;

    saldo_atual = salario -(cheque1 + taxa1) - (cheque2 + taxa2);

    cout << fixed << setprecision(2);
    cout << "\n--- Resumo da Conta ---" << endl;
    cout << "Imposto sobre cheque 1: R$ " << taxa1 << endl;
    cout << "Imposto sobre cheque 2: R$ " << taxa2 << endl;
    cout << "Saldo atual da conta: R$ " << saldo_atual << endl;
    
   return 0;
}
