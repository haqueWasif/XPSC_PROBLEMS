#include<bits/stdc++.h>
using namespace std;


bool cmp(list<char> &lA, list <char> &lB){
    if(lA == lB) return true;
    return false;
}

int main(){
    int n; cin >> n;
    string s; cin >> s;

    list<char> lA = {'A', 'B', 'C'}, lB;

    int i=0, j=0, count=0;    
    while(j < n){
        lB.push_back(s[j]);

        if(j >= 2){
            if(cmp(lA, lB)){
                count++;
            }
            lB.pop_front();
            i++;
        }

        j++;
    }   

    cout << count;
    return 0;
}