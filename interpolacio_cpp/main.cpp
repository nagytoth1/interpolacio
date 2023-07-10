#include <iostream>
#include "lagrange.h"
using namespace std;
int main() {
    float x[100], y[100], xp;
    int i,n;

    /* Input Section */
    cout<<"Pontok száma:  ";
    cin>>n;
    if(n > 100){
        cout << "pontok száma nem lehet 100-nál nagyobb!" << endl;
        exit(1);
    }
    if(n < 1){
        cout << "legalább 2 pontot meg kell adnod!" << endl;
        exit(1);
    }
    cout<<"Alappontok bevitele:"<< endl;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"] = ";
        cin>>x[i];
        cout<<"y["<<i<<"] = ";
        cin>>y[i];
    }
    cout<<"Lagrange-polinomba helyettesíthető x értéke: ";
    cin>>xp;
    cout << "---Lagrange---" << endl;
    Interpolacio* ip = new LagrangeInterpolacio(x, y, xp, n);
    ip->szamit();
    return 0;
}
