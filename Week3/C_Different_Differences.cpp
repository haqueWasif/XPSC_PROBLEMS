<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int k, n; cin >> k >> n;

        vector<int> v(1, 1);

        int i=1;
        while(1){
            int val = v[i-1]+i;
            if(i + n - val + 1  < k) break;
            v.push_back(val);
            i++;
        } 

        while(v.size() < k){
            v.push_back(v[i-1]+1);
            i++;
        }
        

        forI(i, 0, k){
            cout << v[i] << " ";
        }
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
        int k, n; cin >> k >> n;

        vector<int> v(1, 1);

        int i=1;
        while(1){
            int val = v[i-1]+i;
            if(i + n - val + 1  < k) break;
            v.push_back(val);
            i++;
        } 

        while(v.size() < k){
            v.push_back(v[i-1]+1);
            i++;
        }
        

        forI(i, 0, k){
            cout << v[i] << " ";
        }
        cout << "\n";

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}