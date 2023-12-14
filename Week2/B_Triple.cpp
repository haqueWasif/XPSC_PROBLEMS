<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define forIter(i, s, n) for(i=s; i!=n; i++)

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        map<int, int> mp;
        int i;
        forI(i, 0, n){
            int x; cin >> x;
            mp[x]++;
        }
        
        int count=0, ans=-1;
        
        map<int,int> :: iterator itr;
        forIter(itr, mp.begin(), mp.end()){
            if(itr->second == count){
                if(itr->first > ans){
                    ans = (count >= 3 ? itr->first : ans);
                }
            }
            else if(itr->second > count){
                count = itr->second;
                ans = (count >= 3 ? itr->first : ans);
            }
        }

        cout << ans << endl;



    }
    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define forIter(i, s, n) for(i=s; i!=n; i++)

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        map<int, int> mp;
        int i;
        forI(i, 0, n){
            int x; cin >> x;
            mp[x]++;
        }
        
        int count=0, ans=-1;
        
        map<int,int> :: iterator itr;
        forIter(itr, mp.begin(), mp.end()){
            if(itr->second == count){
                if(itr->first > ans){
                    ans = (count >= 3 ? itr->first : ans);
                }
            }
            else if(itr->second > count){
                count = itr->second;
                ans = (count >= 3 ? itr->first : ans);
            }
        }

        cout << ans << endl;



    }
    return 0;
>>>>>>> 7ff84f2 (OK)
}