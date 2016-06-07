#include <iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tdrink=(k*l)/nl;
    int tslice=(c*d)/1;
    int tsalt=p/np;

    int toastd=tdrink/n;
    int toastsl=tslice/n;
    int toastsa=tsalt/n;

    if(toastd<=toastsl&&toastd<=toastsa){
        cout<<toastd;
    }
    else if(toastsl<=toastd&&toastsl<=toastsa){
        cout<<toastsl;
    }
    else if(toastsa<=toastd&&toastsa<=toastsl){
        cout<<toastsa;
    }

    return 0;
}
