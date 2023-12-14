<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int i, a[n], count=0;
    forI(i, 0, n){
        cin >> a[i];
        if(a[i] == 360/n) count++;
    }

    bool flag = false;
    if(count == n) flag = true;
    else{
        sort(a, a+n);

        int s=0;
        forI(i, 0, n-1){
            s += a[i];
        }

    }



    return 0;
}
=======
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

bool dp[1<<15];

void solve(int i, ll sum, vector<int>& a) {
    if(dp[0]) return;
    if(i == a.size()) {
        if(sum < 0) return;
        dp[sum % 360] = true;
        return;
    }
    solve(i + 1, sum + a[i], a);
    solve(i + 1, sum - a[i], a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    solve(0, 0, a);

    if(dp[0]) cout << "YES";
    else cout << "NO";

    return 0;
}
>>>>>>> 7ff84f2 (OK)
