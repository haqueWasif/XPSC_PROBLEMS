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

        bool flag = true;

        int i;
        forI(i, 0, n){
            bool c1 = (s[i] != 'm' && s[i] != 'M');
            bool c2 = (s[i] != 'e' && s[i] != 'E');
            bool c3 = (s[i] != 'o' && s[i] != 'O');
            bool c4 = (s[i] != 'w' && s[i] != 'W');

            if(c1 && c2 && c3 && c4){
                flag = false;
                break;
            }
        }

        if(flag){
            list<int> l;
            forI(i, 0, n){
                if(s[i] == 'm' || s[i] == 'M'){
                    l.push_back(1);
                }
                if(s[i] == 'e' || s[i] == 'E'){
                    l.push_back(2);
                }
                if(s[i] == 'o' || s[i] == 'O'){
                    l.push_back(3);
                }
                if(s[i] == 'w' || s[i] == 'W'){
                    l.push_back(4);
                }
            }
            l.unique();

            vector<int> v;        
            for(auto it = l.begin(); it!=l.end(); it++){
                v.push_back(*it);
            }
            l.clear();

            if(v.size() != 4) flag = false;
            else{
                forI(i, 0, v.size()-1){
                    if(v[i+1]-v[i] != 1){
                        flag = false;
                        break;
                    }
                }
            }

        }
        
        if(flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        
        
    }

    return 0;
}