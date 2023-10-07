#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define pii pair<int, int>

using namespace std;

const vector<pii> dir = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<string> v;
        while(n--){
            int i; 
            forI(i, 1, 8){
                string row; cin >> row;
                v.push_back(row);
            }

            pii ans; bool flag = false;

            int j;
            forI(i, 0, 8){
                int count=0;
                if(!flag){
                     forI(j, 0, 8){
                        if(v[i][j] == '#'){
                            for(auto d : dir){
                                int newi = i + d.first;
                                int newj = i + d.second;

                                if(newi < 0 || newj << 0) break;
                                if(v[newi][newj] == '#') count++;
                            }
                            if(count == 4) {
                                ans.first = i; ans.second = j;
                                flag = true;
                            }
                        }
                    }
                }
            }

            cout << ans.first << " " << ans.second << "\n";
        }



    }

    return 0;
}