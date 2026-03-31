#include  <iostream>

using namespace std;
int main () { 
    float peso, PE, novo_peso;
    cout<<"insira seu peso";
    cin>>peso;
    PE = peso*0.15;
    novo_peso= peso + PE;
    cout<<"seu peso engordando 15% é: "<<novo_peso<<endl;
    
    return 0;
}
