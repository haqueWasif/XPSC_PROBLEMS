#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        
        int freq[26] = {0}, ballons=0;
        for(int i=0; i<n; i++){
            char ch; cin >> ch;
            if(freq[ch - 'A'] > 0) {
                freq[ch - 'A']++;
                ballons++;
            }
            else {
                freq[ch - 'A'] += 2;
                ballons +=2;
            }
        }
        
        cout << ballons << endl;
    }
    return 0;
}