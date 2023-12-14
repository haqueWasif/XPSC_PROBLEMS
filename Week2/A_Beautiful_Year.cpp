<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<=n; i++)

using namespace std;

bool checkDistDigits(int n){
    int num = n;
    vector<int> digits(10, 0);

    while(n > 0){
        digits[n%10]++;
        n /= 10;
    }   
    

    int i;  
    forI(i, 0, 9){
        if(digits[i] > 1) return false;
    }
    
    return true;


}

int main(){
    int n; cin >> n;

    while(true){
        n++; 
        if(checkDistDigits(n)){
            cout << n;
            break;
        }
        
    }
    

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<=n; i++)

using namespace std;

bool checkDistDigits(int n){
    int num = n;
    vector<int> digits(10, 0);

    while(n > 0){
        digits[n%10]++;
        n /= 10;
    }   
    

    int i;  
    forI(i, 0, 9){
        if(digits[i] > 1) return false;
    }
    
    return true;


}

int main(){
    int n; cin >> n;

    while(true){
        n++; 
        if(checkDistDigits(n)){
            cout << n;
            break;
        }
        
    }
    

    return 0;
>>>>>>> 7ff84f2 (OK)
}