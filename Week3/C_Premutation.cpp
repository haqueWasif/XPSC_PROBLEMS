<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        vector<int> v;
        vector<bool> pos(n);

       
        map<int, int> mp;

        int i, j, k, ans, ans_pos;
        forI(i, 0, n){
            vector<int> values;
            forI(j, 0, n-1){
                int x; cin >> x;

                if(i==0){
                    v.push_back(x);
                    mp[x]++;
                }
                if(i != 0){
                    values.push_back(x);
                }
                
            }
            
            if(i==0){
                forI(k, 1, n+1){
                    if(mp.count(k) == 0){
                        ans = k;
                    }
                }
            }
            else{
                k=0;
                while(values[k] != ans){
                    pos[values[k]] = true;
                    k++;
                }
                
                k++;
                while(k < n-1){
                    pos[values[k]] = false;
                    k++;
                }
                
            }
        }
        
        forI(i, 0, n-1){
            if(pos[v[i]] == false){
                ans_pos = i;
                break;
            }
            if(pos[v.back()] == true){
                ans_pos = n-1;
                break;
            }
        }

        v.insert(v.begin() + ans_pos, ans);

        forI(i, 0, v.size()){
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        vector<int> v;
        vector<bool> pos(n);

       
        map<int, int> mp;

        int i, j, k, ans, ans_pos;
        forI(i, 0, n){
            vector<int> values;
            forI(j, 0, n-1){
                int x; cin >> x;

                if(i==0){
                    v.push_back(x);
                    mp[x]++;
                }
                if(i != 0){
                    values.push_back(x);
                }
                
            }
            
            if(i==0){
                forI(k, 1, n+1){
                    if(mp.count(k) == 0){
                        ans = k;
                    }
                }
            }
            else{
                k=0;
                while(values[k] != ans){
                    pos[values[k]] = true;
                    k++;
                }
                
                k++;
                while(k < n-1){
                    pos[values[k]] = false;
                    k++;
                }
                
            }
        }
        
        forI(i, 0, n-1){
            if(pos[v[i]] == false){
                ans_pos = i;
                break;
            }
            if(pos[v.back()] == true){
                ans_pos = n-1;
                break;
            }
        }

        v.insert(v.begin() + ans_pos, ans);

        forI(i, 0, v.size()){
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
>>>>>>> 7ff84f2 (OK)
