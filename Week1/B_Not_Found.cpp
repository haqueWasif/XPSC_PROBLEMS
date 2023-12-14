<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int freq[26] = {0};

    char ch;
    while(cin >> ch){
        freq[ch - 'a']++;
    }

    bool flag=false;
    for(int i=0; i<26; i++){
        if(freq[i] == 0) {
            cout << char('a' + i);
            flag = true;
            break;
        }
    }

    if(!flag) cout << "None";
    
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int freq[26] = {0};

    char ch;
    while(cin >> ch){
        freq[ch - 'a']++;
    }

    bool flag=false;
    for(int i=0; i<26; i++){
        if(freq[i] == 0) {
            cout << char('a' + i);
            flag = true;
            break;
        }
    }

    if(!flag) cout << "None";
    
    return 0;
>>>>>>> 7ff84f2 (OK)
}