#include <bits/stdc++.h>
using namespace std;
int main (){
    ///aqui declare las variables
    int a,b,c;
    int x1,x2;
    int resultado;
    ///aqui lei las variables
    cout<<"Codigo creado por julian";
    cin>>a;
    cin>>b;
    cin>>c;
    ///aqui hice las operaciones
    resultado=(b*b)-(4*a*c);
    x1=(-b+(resultado))/(2*a);
    x2=(-b-(resultado))/(2*a);
    cout<<x1<<" "<<x2<<" ";
}
