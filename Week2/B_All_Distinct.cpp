<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

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

        for(auto itr=mp.begin(); itr != mp.end(); itr++){
            if(itr->second > 2){
                 if(itr->second % 2 == 0) itr->second = 2;
                 else itr->second = 1;
            }
        }

        int cnt2=0, cnt1=0;
        for(auto itr=mp.begin(); itr != mp.end(); itr++){
            if(itr -> second == 2) cnt2++;
            else cnt1++;
        }

        if(cnt2 % 2 != 0) cnt2--;
        cout << cnt1 + cnt2 << endl;




    }
    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

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

        for(auto itr=mp.begin(); itr != mp.end(); itr++){
            if(itr->second > 2){
                 if(itr->second % 2 == 0) itr->second = 2;
                 else itr->second = 1;
            }
        }

        int cnt2=0, cnt1=0;
        for(auto itr=mp.begin(); itr != mp.end(); itr++){
            if(itr -> second == 2) cnt2++;
            else cnt1++;
        }

        if(cnt2 % 2 != 0) cnt2--;
        cout << cnt1 + cnt2 << endl;




    }
    return 0;
>>>>>>> 7ff84f2 (OK)
}