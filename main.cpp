#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    int n, i, j, t;

    do {
        cout<<"Inserire il numero di cifre da inserire nel vettore"<<endl;
        cin>>n;
    } while(n<=0);

    vector<int>r(n);

    for (i=0; i<n; i++) {
        r[i]= rand () % (n*10)+1;
    }

    i=0;
    while (i<n) {
        j=0;
        while (i<n-1) {
            if (r[j]>r[j+1]) {
                
                t=r[j];
                t=r[j+1];
                r[j+1]=t;

            }
        }
        i=i+1;

    }

    cout<<"R, pari: ";
    for(i=0; i<n; i++) {
        if (r[i]%2==0) {
            cout<<r[i]<<"; ";
        }
    }

    cout<<"R, dispari: ";
    for(i=0; i<n; i++) {
        if (r[i]%2!=0) {
            cout<<r[i]<<"; ";
        }
    }
}
