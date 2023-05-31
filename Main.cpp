#include <iostream>
using namespace std;

 float numerador (int a,int b){
    int potencia = 1;
    for (int i=0; i<b ; i++){
        potencia = potencia*a ;
    }
    return potencia;
}

int main() {
    int n = 0;
    float pi = 3.141592 ;
    float pi1= 0;
    float denominador = 0 ;
    float division;
    do{
        denominador = 2*n + 1;
        float division= numerador(-1,n) / denominador;
        pi1 += division * 4 ;
        n++;
    } while(pi1 != pi);
    cout.precision(7);
    cout<<" El valor de pi es:"<< pi1 <<" luego de "<<n<<" iteraciones"<<endl;
    return 0;
}     