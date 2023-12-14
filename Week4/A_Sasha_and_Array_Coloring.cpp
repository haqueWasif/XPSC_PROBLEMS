#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   
   while(t--){
      int n;
      cin >> n;
      
      int a[n], sortedGreater[n], sortedSmaller[n];
      for (int i = 0; i < n; i++)
      {
           cin >> a[i];
           sortedGreater[i] = a[i];
           sortedSmaller[i] = a[i];
      }

      sort(sortedGreater, sortedGreater+n, greater<>());
      sort(sortedSmaller, sortedSmaller+n);
    
      int mx=0;
      for (int i = 0; i < n; i++)
      {
            if(sortedGreater[i] - sortedSmaller[i] <= 0){
                break;
            }
            mx += sortedGreater[i] - sortedSmaller[i];
      }

      cout << mx << endl;

   }
   

   return 0;
}