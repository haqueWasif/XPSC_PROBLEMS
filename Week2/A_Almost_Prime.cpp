#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<=n; i++)

using namespace std;

bool isPrime(int n){
    if(n == 1) return false;
    
    int i;
    forI(i, 2, sqrt(n)){
        if(n % i == 0) return false;
    }

    return true;
}

int findPrimeDiv(int n){
    int div=0;

    int i;
    forI(i, 2, sqrt(n)){
        if(n % i == 0){
            if(isPrime(i)) div++;
            if( (n / i != i ) && isPrime(n / i)) div++;
        }
    }

    return div;
}

int main(){
    int n; cin >> n;

    int i, cnt=0;
    forI(i, 1, n){
        int primeDiv = findPrimeDiv(i);
        if(primeDiv == 2) cnt++;
    }

    cout << cnt << endl;

    return 0;
}