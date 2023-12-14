<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

bool checkSubstr(string ans, string s){
    int i=ans.find(s[0]);
    if(i == -1) return false;

    for(char ch : s){
        if(ans[i] == ch) i++;
        else return false; 
    }

    return true;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    string ans = "Yes";
    
    int i;
    forI(i, 0, 20){
        ans += "Yes";
    }


    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        bool flag = checkSubstr(ans, s);

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

bool checkSubstr(string ans, string s){
    int i=ans.find(s[0]);
    if(i == -1) return false;

    for(char ch : s){
        if(ans[i] == ch) i++;
        else return false; 
    }

    return true;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    string ans = "Yes";
    
    int i;
    forI(i, 0, 20){
        ans += "Yes";
    }


    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        bool flag = checkSubstr(ans, s);

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}