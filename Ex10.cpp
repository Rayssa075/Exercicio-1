#include  <iostream>
using namespace std;
int main () {
    float base_maior;
cout<<"Digite o valor da base maior do trpezio";
cin>>base_maior;
    float base_menor;
    cout<<"Digite o valor da base menor do trapesio";
    cin>> base_menor;
    float altura; 
    cout<<"Digite o valor da altura do trapesio";
    cin>> altura;

    float area;
    if (area=  ((base_maior + base_menor) * altura) / 2) {
        cout<<" A area do trapezio é:"<<area<< endl;
    }

    return 0;
}
