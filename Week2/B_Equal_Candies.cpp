<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        priority_queue<int, vector<int>, greater<int> > pq;

        int i;
        forI(i, 0, n){
            int x; cin >> x;
            pq.push(x);
        }   

        int ans=0, mn = pq.top();
        while(!pq.empty()){
            if(pq.top() != mn) ans += (pq.top() - mn);
            pq.pop();
        }

        cout << ans << endl;
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

        priority_queue<int, vector<int>, greater<int> > pq;

        int i;
        forI(i, 0, n){
            int x; cin >> x;
            pq.push(x);
        }   

        int ans=0, mn = pq.top();
        while(!pq.empty()){
            if(pq.top() != mn) ans += (pq.top() - mn);
            pq.pop();
        }

        cout << ans << endl;
    }
    return 0;
>>>>>>> 7ff84f2 (OK)
}