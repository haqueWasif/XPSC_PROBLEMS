#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)
using namespace std;


bool isPalindrome(int num1, int num2){
    string a = to_string(num1), b = to_string(num2);

    int nA = a.size(), nB = b.size();

    if(nA == 1) {
        a.insert(a.begin(), '0');
        nA++;
    }
    if(nB == 1) {
        b.insert(b.begin(), '0');
        nB++;
    }


    int i;
    forI(i, 0, nA){
        if(a[i] != b[nA-i-1]){
            return false;
        }
       
    }

    return true;
}

int sol(string time, int x){
    string hour = time, min = time; 
    hour.erase(hour.begin()+2, hour.end());
    min.erase(min.begin(), min.begin()+3);

    int h = stoi(hour), m = stoi(min);
    
    int count=0;
    
    do{
        h += x/60;
        m += x%60;

        if(m >= 60) {
            m -= 60;
            h++;
        }
        if(h >= 24) h -= 24;

        if(isPalindrome(h, m)) {
            count++;
        }

    }while(stoi(hour) != h || stoi(min) != m);
  
    
    return count;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){
        string time; cin >> time;
        int x; cin >> x;

        cout << sol(time, x) <<  "\n";


    }

    return 0;
}