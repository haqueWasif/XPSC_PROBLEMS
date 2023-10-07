//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool isAnagram(vector<int>& freqA, vector<int>& freqB){
        for(int i=0; i<26; i++){
            if(freqA[i] != freqB[i]) return false;
        }
        
        return true;
    }
	int search(string pat, string txt) {
	    int n = txt.size(), k = pat.size();
	    
	    vector<int> freqPat(26,0);
	    vector<int> freqTxt(26,0);
	    
	    for(int i=0; i<k; i++) freqPat[pat[i] - 'a']++;

	    int count = 0;
	    
	    int i=0, j=0;
	    while(j<n){
	        freqTxt[txt[j] - 'a']++;
	        if(j >= k-1){
	            bool flag = isAnagram(freqTxt, freqPat);
	            if(flag) count++;
	            freqTxt[txt[i] - 'a']--;
	            i++;
	        }
	        j++;
	    }
	    
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends