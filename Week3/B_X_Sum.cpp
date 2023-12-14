<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pii pair<int,int>
using namespace std;

const vector<pii> dir = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int sol(int n, int m, vector<vector<int>>& v){
    int mx = 0;

    int i, j;
    forI(i, 0, n){
        forI(j, 0, m){
            int s=v[i][j];
            for(auto d : dir){
                int newi=i, newj=j;
                while(true){
                    newi = newi + d.first;
                    newj = newj + d.second;
                    if(newi < 0 || newj < 0) break;
                    if(newi >= n || newj >= m) break;
                    s += v[newi][newj];
                }
            }
            mx = max(s, mx);
        }
    }
    
    return mx;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        vector<vector<int>> a(n);

        int i,j;
        forI(i, 0, n){
            forI(j, 0, m){
                int x; cin >> x;
                a[i].push_back(x);
            }
        }

        int s = sol(n, m, a);
        
        cout << s << "\n";

    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pii pair<int,int>
using namespace std;

const vector<pii> dir = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int sol(int n, int m, vector<vector<int>>& v){
    int mx = 0;

    int i, j;
    forI(i, 0, n){
        forI(j, 0, m){
            int s=v[i][j];
            for(auto d : dir){
                int newi=i, newj=j;
                while(true){
                    newi = newi + d.first;
                    newj = newj + d.second;
                    if(newi < 0 || newj < 0) break;
                    if(newi >= n || newj >= m) break;
                    s += v[newi][newj];
                }
            }
            mx = max(s, mx);
        }
    }
    
    return mx;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        vector<vector<int>> a(n);

        int i,j;
        forI(i, 0, n){
            forI(j, 0, m){
                int x; cin >> x;
                a[i].push_back(x);
            }
        }

        int s = sol(n, m, a);
        
        cout << s << "\n";

    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}