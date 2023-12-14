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

        vector<string> v;
        map<string, int> mp;

        int i;
        forI(i, 0, n){
            string s; cin >> s;
            v.push_back(s);
            mp[s] = 1;
        }

        vector<int> digits;  

        int j;
        forI(i, 0, n){
            string s = v[i];
            bool flag = false;
            forI(j, 0, s.size()){
                string a = s; a.erase(a.begin()+j+1, a.end());
                string b = s; b.erase(b.begin(), b.begin()+j+1);
                if(mp[a] == 1 && mp[b] == 1){
                    digits.push_back(1);
                    flag = true;
                    break;
                }
            }
            if(!flag) digits.push_back(0);
            
        }
        

        forI(i, 0, n) cout << digits[i];
        cout << "\n";
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

        vector<string> v;
        map<string, int> mp;

        int i;
        forI(i, 0, n){
            string s; cin >> s;
            v.push_back(s);
            mp[s] = 1;
        }

        vector<int> digits;  

        int j;
        forI(i, 0, n){
            string s = v[i];
            bool flag = false;
            forI(j, 0, s.size()){
                string a = s; a.erase(a.begin()+j+1, a.end());
                string b = s; b.erase(b.begin(), b.begin()+j+1);
                if(mp[a] == 1 && mp[b] == 1){
                    digits.push_back(1);
                    flag = true;
                    break;
                }
            }
            if(!flag) digits.push_back(0);
            
        }
        

        forI(i, 0, n) cout << digits[i];
        cout << "\n";
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}