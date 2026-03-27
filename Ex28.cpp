#include <iostream>
using namespace std;
int main() {
  float horas_trabalhadas, salario_minimo;
  float valor_hora_trabalhada,salario_bruto,imposto, salario_a_receber;

  cout<< "Digite o numero de horas trabalhadas";
  cin>> horas_trabalhadas;

  cout<<"Digite o valor do salario minimo";
  cin>> salario_minimo;

  valor_hora_trabalhada = salario_minimo / 2;
  salario_bruto = horas_trabalhadas * valor_hora_trabalhada;
  imposto = salario_bruto * 0.03;
 salario_a_receber = salario_bruto - imposto;

 cout<<"\n------Detalhamento do salario------\n";
  cout<< "A hora trabalhada equivale ao valor: " << valor_hora_trabalhada << endl;
  cout<< "Salario bruto: " << salario_bruto << endl;
  cout<< "Imposto: " << imposto << endl;
  cout<< "Salario a receber: " << salario_a_receber << endl;
  return 0;
}
