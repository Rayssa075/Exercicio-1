#include <iostream>
using namespace std;
int main () {
    float peso_em_quilos, peso_em_gramas;
    cout<< " Qual o seu peso em quilos? ";
    cin>> peso_em_quilos;
    peso_em_gramas= peso_em_quilos * 1000;
    cout<< "Em gramas o seu peso é: "<< peso_em_gramas<< "g"<<endl;
    return 0;
}
