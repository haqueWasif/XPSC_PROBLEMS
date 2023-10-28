#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
#define vvi vector<vector<int>>
using namespace std;


bool isBeautiful(vvi a){
    bool flag = true;

    int i;
    forI(i, 0, 2){
        if(a[i][0] > a[i][1]){
            flag = false;
        }
        if(a[0][i] < a[1][i]){
            flag = false;
        }
    }
    return flag;
}

void matTrans(vvi &a){
    swap(a[0][0], a[0][1]);
    swap(a[0][0], a[1][1]);
    swap(a[0][0], a[1][0]);
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        vvi mat = {{0,0}, {0, 0}};

        int i, j;
        forI(i, 0, 2){
            forI(j, 0, 2){
                cin >> mat[i][j];
            }
        }
                
        int op=0;
        while(op < 4){
            if(isBeautiful(mat)) break;
            matTrans(mat);
            op++;
        }

        if(op == 4){
            cout << "NO" << "\n";
        }
        else cout << "YES" << "\n";
        
    }

    return 0;
}