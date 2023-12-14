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
  
  const int N = 1e9+7;

  vvi subset(1<<20);
  
  void subset_gen(){
    int i, j;
      forI(i, 0, 1<<20){  
        forI(j, 0, 20){
            int mask = ( 1 << j );

            if( (i & mask) != 0){
                subset[i].push_back(j);
            }
        }
      }
      forI(i, 0, 1<<20){  
        forI(j, 0, 20){
            cout << subset[i][j] << " ";
        }
        cout << nl;
      }
  }

  void solve(){
      int n, k; cin >> n >> k;

      ll a[21] = {1};
      
      ll i, j;
      forI(i, 1, 21){
        a[i] = (a[i-1] * n) % N;
      }

      ll ans=0;
      forI(i, 0, subset[k].size()){
        ans += a[subset[k][i]] % N;
      }
      
      cout << ans % N << nl;
  
  }
  
  int main(){
      fastIO();

      subset_gen();

     
  
      return 0;
  }