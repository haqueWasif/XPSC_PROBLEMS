<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> a[i];}
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
    int n; cin >> n;

    string s; cin >> s;
    stack<char> st;

    int i;
    forI_R(i, n-1, 0){
        if(s[i] != '0'){
            char ch = 'a' + (s[i]-'1');
            st.push(ch);
        }
        else{
            string s1(1, s[i-2]), s2(1, s[i-1]);
            st.push('a' + stoi(s1 + s2) - 1);
            i-=2;
        }
    }

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << nl;

    
    

}

int main(){
    fastIO();

    int q; cin >> q;
    while(q--){
        solve();
    }

    return 0;
=======
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
#define inputArr(n, arr) for(int i=0; i<n; i++){cin >> a[i];}
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
    int n; cin >> n;

    string s; cin >> s;
    stack<char> st;

    int i;
    forI_R(i, n-1, 0){
        if(s[i] != '0'){
            char ch = 'a' + (s[i]-'1');
            st.push(ch);
        }
        else{
            string s1(1, s[i-2]), s2(1, s[i-1]);
            st.push('a' + stoi(s1 + s2) - 1);
            i-=2;
        }
    }

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << nl;

    
    

}

int main(){
    fastIO();

    int q; cin >> q;
    while(q--){
        solve();
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}