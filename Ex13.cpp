#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float r, c, a, v;
    cout<< "Digite o cumprimento do raio de sua esfera: ";
    cin>> r;
    c = 2 * 3.14 * r;
    a = 3.14 * pow(r,2);
    v = 0.75 * 3,14 * pow(r,3);
    cout<< "Utilizando π =3,14. O valor do cumprimento da esfera é: " <<c<< " O valor da área é: " <<a<< " E o valor do volume é: " <<v;
    

    return 0;
}
