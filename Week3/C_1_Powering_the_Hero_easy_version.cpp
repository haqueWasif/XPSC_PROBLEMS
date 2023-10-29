#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int 
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        stack<int> hero;
        priority_queue<int> bonus;

        int i; ll maxPow=0;
        forI(i, 0, n){
            int s; cin >> s;
            if(s == 0) {
                hero.push(s);
                
                if(!bonus.empty() && !hero.empty()){
                    maxPow += bonus.top();
                    bonus.pop();
                    hero.pop();
                }
            }
            else {
                bonus.push(s);
            }
        }

        cout << maxPow << "\n";
       
        
    }

    return 0;
}