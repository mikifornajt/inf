#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int doIluZaokr;
    int zaokr;
    double r,h;

    cout<<"Podaj promien podstawy sto¿ka :"<<endl;
    cin>>r;

    cout<<"Podaj wysokosc :"<<endl;
    cin>>h;
    double objetosc= (1.0/3.0)*M_PI*pow(r,2)*h;
    cout<<"Objêtosc wynosi :"<<objetosc;
    cout<<"Podaj do ilu chesz zaokr¹glic"<<endl;
    cin>>doIluZaokr;
    zaokr=round(objetosc*pow(10, doIluZaokr))/100.0;
    cout<<"Zaokr¹glona: "<<zaokr<<endl;




    return 0;
}

