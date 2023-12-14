<<<<<<< HEAD
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
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

bool validAns(int c, int dist, int n, int a[]){
    int i, prev = a[0];
    forI(i, 1, n){
        if(c == 0) return true;
        if(a[i]-prev >= dist){
            prev = a[i];
            c--;
        }
    }
    return (c == 0);
}
int binarySearch(int c, int n, int a[]){
    int ans;

    int l = 0, r = a[n-1]-a[0];
    while(l<=r){
        int mid = l + (r-l)/2;

        if(validAns(c-1, mid, n, a)){
            l = mid+1;
            ans = mid;
        }
        else{
            r = mid-1;
        }
    }

    return ans;
}
int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        int n, c; cin >> n >> c;

        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }
        sort(a, a+n);

        cout << binarySearch(c, n, a) << nl;

    }

    return 0;
=======
#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
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

bool validAns(int c, int dist, int n, int a[]){
    int i, prev = a[0];
    forI(i, 1, n){
        if(c == 0) return true;
        if(a[i]-prev >= dist){
            prev = a[i];
            c--;
        }
    }
    return (c == 0);
}
int binarySearch(int c, int n, int a[]){
    int ans;

    int l = 0, r = a[n-1]-a[0];
    while(l<=r){
        int mid = l + (r-l)/2;

        if(validAns(c-1, mid, n, a)){
            l = mid+1;
            ans = mid;
        }
        else{
            r = mid-1;
        }
    }

    return ans;
}
int main(){
    fastIO();

    int t; cin >> t;
    while(t--){
        int n, c; cin >> n >> c;

        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }
        sort(a, a+n);

        cout << binarySearch(c, n, a) << nl;

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}