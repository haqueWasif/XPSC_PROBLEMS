#include<bits/stdc++.h>
#define fastIO() ios_base :: sync_with_stdio(false); cin.tie(NULL);
#define forI(i, s, n) for(i=s; i<n; i++)
#define forI_R(i, n, s) for(i=n; i>=s; i--)
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

long long sumDigits(long long x) {
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

bool isReallyBigNumber(long long x, long long s) {
    return x - sumDigits(x) >= s;
}

long long binarySearch(long long s, long long n) {
    long long left = s, right = n;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (isReallyBigNumber(mid, s)) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    long long n, s;
    cin >> n >> s;
    long long x = binarySearch(s, n);

    if(n - sumDigits(n) < s) cout << 0;
    else cout << n - x + 1;
    return 0;
}

