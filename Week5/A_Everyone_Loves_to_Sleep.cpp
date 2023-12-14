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
    int n, h_bed, m_bed; cin >> n >> h_bed >> m_bed;

    int mn_h_sleep=INT_MAX, mn_m_sleep=INT_MAX;
    while(n--){
        int h, m; cin >> h >> m;

        int h_sleep, m_sleep;
        if(m < m_bed){
             m_sleep = 60 - (m_bed - m);
             h--;
             if(h < h_bed) h_sleep = 24 - (h_bed - h);
             else h_sleep = h - h_bed;
        }
        else{
             m_sleep = m - m_bed;
             if(h < h_bed) h_sleep = 24 - (h_bed - h);
             else h_sleep = h - h_bed;
        }

        if(mn_h_sleep > h_sleep){
            mn_h_sleep = min(mn_h_sleep, h_sleep);
            mn_m_sleep = m_sleep;
        }
        else if(mn_h_sleep == h_sleep){
            if(mn_m_sleep > m_sleep){
                mn_m_sleep = m_sleep;
            }
        }
    }

    cout << mn_h_sleep << " " << mn_m_sleep << nl;

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
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
    int n, h_bed, m_bed; cin >> n >> h_bed >> m_bed;

    int mn_h_sleep=INT_MAX, mn_m_sleep=INT_MAX;
    while(n--){
        int h, m; cin >> h >> m;

        int h_sleep, m_sleep;
        if(m < m_bed){
             m_sleep = 60 - (m_bed - m);
             h--;
             if(h < h_bed) h_sleep = 24 - (h_bed - h);
             else h_sleep = h - h_bed;
        }
        else{
             m_sleep = m - m_bed;
             if(h < h_bed) h_sleep = 24 - (h_bed - h);
             else h_sleep = h - h_bed;
        }

        if(mn_h_sleep > h_sleep){
            mn_h_sleep = min(mn_h_sleep, h_sleep);
            mn_m_sleep = m_sleep;
        }
        else if(mn_h_sleep == h_sleep){
            if(mn_m_sleep > m_sleep){
                mn_m_sleep = m_sleep;
            }
        }
    }

    cout << mn_h_sleep << " " << mn_m_sleep << nl;

}

int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}