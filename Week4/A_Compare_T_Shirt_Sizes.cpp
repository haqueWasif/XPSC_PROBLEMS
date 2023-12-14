#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, s, n) for(i=n; i>=0; i--)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define u_mii unordered_map<int,int>
#define mii map<int,int>
#define mic map<int,char>
#define mci map<char,int>
#define pii pair<int,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
using namespace std;

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        string a, b; cin >> a >> b;

        char chA, chB;

        int i, xA=0, xB=0;
        forI(i, 0, a.size()){
            if(a[i] == 'X') xA++;
            if(a[i] != 'X') chA = a[i];
        }
        
        forI(i, 0, b.size()){
            if(b[i] == 'X') xB++;
            if(b[i] != 'X') chB = b[i];
        }

        if(chA == chB){
            if(xA > xB){
                if(chA == 'S'){
                    cout << "<" << nl;
                }
                else if(chA == 'L'){
                    cout << ">" << nl;
                }
            } 
            else if(xA < xB) {
                if(chA == 'S'){
                    cout << ">" << nl;
                }
                else if(chA == 'L'){
                    cout << "<" << nl;
                }
            }
            else cout << "=" << nl;
        }
        else{
            if(chA == 'S'){
                cout << "<" << nl;
            }
            else if(chA == 'M' && chB == 'S'){
                cout << ">" << nl;
            }
            else if(chA == 'M' && chB == 'L'){
                cout << "<" << nl;
            }
            else cout << ">" << nl;
        }    

    }

    return 0;
}