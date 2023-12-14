<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll l, r, x;
        cin >> l >> r >> x;

        ll a, b;
        cin >> a >> b;

        ll i=a, op=0;

        while(i != b){
            if(abs(b-i) >= x){
                op++;
                break;
            }
            if(op > 3){
                op = -1;
                break;
            }

            if(i > b){
               if(i+x <= r) i = r; 
               else if(i-x >= l) i = l;
            
            }
            else if(i < b){
                if(i-x >= l) i = l;
                else if(i+x <= r) i = r;
            }
            
            else {
                op = -1;
                break;
            }

            op++;
        }

        cout << op << "\n";
    }

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define ll long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll l, r, x;
        cin >> l >> r >> x;

        ll a, b;
        cin >> a >> b;

        ll i=a, op=0;

        while(i != b){
            if(abs(b-i) >= x){
                op++;
                break;
            }
            if(op > 3){
                op = -1;
                break;
            }

            if(i > b){
               if(i+x <= r) i = r; 
               else if(i-x >= l) i = l;
            
            }
            else if(i < b){
                if(i-x >= l) i = l;
                else if(i+x <= r) i = r;
            }
            
            else {
                op = -1;
                break;
            }

            op++;
        }

        cout << op << "\n";
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}