<<<<<<< HEAD
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

using namespace std;

int main(){
    int s, t; cin >> s >> t;

    int a, b, c, count=0;
    forI(a, 0, 101){
        forI(b, 0, 101){
            forI(c, 0, 101){
                if(a+b+c <= s  &&  a*b*c <= t)
                    count++;
            }
        }
    }

    cout << count;

    return 0;
=======
#include<bits/stdc++.h>
#define forI(i, s, n) for(i=s; i<n; i++)

using namespace std;

int main(){
    int s, t; cin >> s >> t;

    int a, b, c, count=0;
    forI(a, 0, 101){
        forI(b, 0, 101){
            forI(c, 0, 101){
                if(a+b+c <= s  &&  a*b*c <= t)
                    count++;
            }
        }
    }

    cout << count;

    return 0;
>>>>>>> 7ff84f2 (OK)
}