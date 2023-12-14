<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    
    int count=0;
    while(n--){
        int t;
        cin >> t;

        if(t % k == 0){
            count++;
        } 
    }
    cout << count;

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    
    int count=0;
    while(n--){
        int t;
        cin >> t;

        if(t % k == 0){
            count++;
        } 
    }
    cout << count;

    return 0;
>>>>>>> 7ff84f2 (OK)
}