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
        
        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }

        forI(i, 0, n){
            int b; cin >> b;
            
            while(b--){
                char ch; cin >> ch;

                if(ch == 'D') a[i]++;
                else if(ch == 'U') a[i]--;

                if(a[i] == 10) a[i] = 0;
                else if(a[i] == -1) a[i] = 9;
            }
        }

        forI(i, 0, n){
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
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
        
        int i, a[n];
        forI(i, 0, n){
            cin >> a[i];
        }

        forI(i, 0, n){
            int b; cin >> b;
            
            while(b--){
                char ch; cin >> ch;

                if(ch == 'D') a[i]++;
                else if(ch == 'U') a[i]--;

                if(a[i] == 10) a[i] = 0;
                else if(a[i] == -1) a[i] = 9;
            }
        }

        forI(i, 0, n){
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
>>>>>>> 7ff84f2 (OK)
}