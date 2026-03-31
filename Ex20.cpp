#include <iostream>
using namespace std;
int main () {
    float peso, altura, IMC;
    cout<<"Digite seu peso (em kg) ";
    cin>>peso;
    cout<<" Digite sua altura (em metros) ";
    cin>>altura;
    IMC = peso / (altura * altura);
    cout<<"Seu IMC é:"<<IMC<<endl;
    return 0;
}
