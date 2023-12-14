<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<string> v;
        v.push_back(s.substr(0, 2));

        int i=1;
        while(i < n-1){    
            string x = s.substr(i, 2);

            string rev = x;
            reverse(rev.begin(), rev.end());

            if(x != v.back() && rev != v.back()){
                v.push_back(x);
            }

            i++;
        }

        cout << v.size() << "\n";

    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<string> v;
        v.push_back(s.substr(0, 2));

        int i=1;
        while(i < n-1){    
            string x = s.substr(i, 2);

            string rev = x;
            reverse(rev.begin(), rev.end());

            if(x != v.back() && rev != v.back()){
                v.push_back(x);
            }

            i++;
        }

        cout << v.size() << "\n";

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}