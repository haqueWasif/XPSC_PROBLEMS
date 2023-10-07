#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch; int i=0;
    while(cin >> ch){
        if(i%2==0) cout << ch;
        i++;
    }
    return 0;
}