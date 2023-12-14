<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);  

    string name = "Timur";

    int i, freqName[100] = {0};
    forI(i, 0, name.size()){
        freqName[name[i]-'A']++;
    }

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int freqS[100] = {0};
        forI(i, 0, n){
            char ch; cin >> ch;
            freqS[ch-'A']++;
        }

        bool flag = true;
        forI(i, 0, 100){
            if(freqName[i] != freqS[i]){
                flag = false;
            }
        }

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);  

    string name = "Timur";

    int i, freqName[100] = {0};
    forI(i, 0, name.size()){
        freqName[name[i]-'A']++;
    }

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int freqS[100] = {0};
        forI(i, 0, n){
            char ch; cin >> ch;
            freqS[ch-'A']++;
        }

        bool flag = true;
        forI(i, 0, 100){
            if(freqName[i] != freqS[i]){
                flag = false;
            }
        }

        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}