#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    int x1,x2;
    int resultado;
    cin>>a;
    cin>>b;
    cin>>c;
    resultado=(b*b)-(4*a*c);
    x1=(-b+(resultado))/(2*a);
    x2=(-b-(resultado))/(2*a);
    cout<<x1<<" "<<x2<<" ";
}
