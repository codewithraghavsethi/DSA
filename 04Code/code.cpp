#include <iostream>
using namespace std;

int facN(int n){
    int fac = 1;

    for(int i=1; i<=n; i++){
        fac = fac * i;
    }

    return fac;
}

int main(){
    cout << "Factorial of = " << facN(4) << endl;

    return 0;
}