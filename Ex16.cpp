#include <iostream>
using namespace std;
int main() {
    float Angulo1, Angulo2, Angulo3;
    cout<< "Digite o valor do Angulo1, Angulo2";
    cin>> Angulo1 >> Angulo2;
    Angulo3 = 180 - (Angulo1 + Angulo2);
    cout<< "O valor do Angulo3 é: "<< Angulo3;
    return 0;
}
