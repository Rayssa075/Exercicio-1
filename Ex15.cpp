#include <iostream> 
using namespace std;
int main() {
    float horas_trabalhadas, valor_do_salario_minimo, horas_extras_trabalhadas;
    float valor_hora_t, valor_hora_extra, salario_bruto,total_receber, salario_a_receber;

    cout<<"Digite o numero de horas trabalhadas";
    cin>>horas_trabalhadas;

    cout<<"Digite o valor do saçario minimo";
    cin>>valor_do_salario_minimo;

    cout<<"Digite o numero de horas extras trabalhadas";
    cin>>horas_extras_trabalhadas;

    valor_hora_t = valor_do_salario_minimo / 8;
    valor_hora_extra = valor_do_salario_minimo / 4;

    salario_bruto = horas_trabalhadas * valor_hora_t;
    horas_extras_trabalhadas = horas_extras_trabalhadas * valor_hora_extra;
    total_receber = salario_bruto + horas_extras_trabalhadas;

    cout<<"\n------Detalhamento do salario------\n";
    cout<<"Salario bruto: "<<salario_bruto<<endl;   
    cout<<"Valor das horas extras: "<<horas_extras_trabalhadas<<endl;
    cout<<"Total a receber: "<<total_receber<<endl;
    return 0;

}
