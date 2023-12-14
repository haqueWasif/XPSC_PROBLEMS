#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> arr[i];}
#define forI_list(it, l) for(auto it=l.begin(); it != l.end(); it++)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mic map<int,char>
#define msi map<string,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.size();


    priority_queue< pair<int, char> > pq;

    int i, freq[26] = {0};
    forI(i, 0, n){
        freq[s[i]-'A']++;
    }

    int odd = 0;
    forI(i, 0, 26){
        if(freq[i] & 1){
            odd++;
        }
        if(freq[i] > 0) pq.push({freq[i], i+'A'});
    }

    if(odd > 1){
        cout << "NO SOLUTION" << nl;
    }
   
    else{
        i = 0;
        while(!pq.empty()){
            pair<int, char> top = pq.top();
            
            while(top.first != 0){
                if(top.first >= 2){
                    s[i] = top.second;
                    s[n-i-1] = top.second;
                    top.first -= 2;

                    i++;
                }
                else{
                    s[(n-1) / 2] = top.second;
                    top.first--;
                }

                
            }
            pq.pop();
        }
        
        cout << s << nl;
    }


    

}

int main(){
    fastIO();

    solve();

    return 0;
}