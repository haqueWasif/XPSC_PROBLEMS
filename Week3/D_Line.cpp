<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pllc pair<long long int,char>
#define ll long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        
        string s; cin >> s;
        
        priority_queue<pllc, vector<pllc>, greater<pllc> > pq;

        int i; ll ans=0; pllc count;
        forI(i, 0, n){
            if(s[i] == 'L'){
                count.second = 'L';
                count.first = i;
            }
            else{
                count.second = 'R';
                count.first = n-i-1; 
            }
            pq.push(count);
            ans += count.first;
        }
        
        forI(i, 0, n){
            pllc minCount = pq.top();
            ll prevAns = ans;
            if(minCount.second == 'L'){
                minCount.second = 'R';
                ans -= minCount.first;
                minCount.first = n-minCount.first-1;
                ans += minCount.first;
            }
            else if(minCount.second == 'R'){
                minCount.second = 'L';
                ans -= minCount.first;
                minCount.first = n-minCount.first-1;
                ans += minCount.first;
            }
            if(prevAns > ans){
                ans = prevAns;
            }
            cout << ans << " ";
            pq.pop();
        }
        cout << "\n";
         
        
    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pllc pair<long long int,char>
#define ll long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        
        string s; cin >> s;
        
        priority_queue<pllc, vector<pllc>, greater<pllc> > pq;

        int i; ll ans=0; pllc count;
        forI(i, 0, n){
            if(s[i] == 'L'){
                count.second = 'L';
                count.first = i;
            }
            else{
                count.second = 'R';
                count.first = n-i-1; 
            }
            pq.push(count);
            ans += count.first;
        }
        
        forI(i, 0, n){
            pllc minCount = pq.top();
            ll prevAns = ans;
            if(minCount.second == 'L'){
                minCount.second = 'R';
                ans -= minCount.first;
                minCount.first = n-minCount.first-1;
                ans += minCount.first;
            }
            else if(minCount.second == 'R'){
                minCount.second = 'L';
                ans -= minCount.first;
                minCount.first = n-minCount.first-1;
                ans += minCount.first;
            }
            if(prevAns > ans){
                ans = prevAns;
            }
            cout << ans << " ";
            pq.pop();
        }
        cout << "\n";
         
        
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}