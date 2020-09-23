#include<bits/stdc++.h>
using namespace std;
typedef long long int lli; typedef unsigned long long int ulli; typedef long double ld;
#define forn(i, n) for (lli i = 0; i < lli(n); ++i)
#define for1(i, n) for (lli i = 1; i <= lli(n); ++i)
#define fore(i, l, r) for (lli i = lli(l); i <= lli(r); ++i)
#define ford(i, n) for (lli i = lli(n) - 1; i >= 0; --i)
#define pb push_back

struct hash_pair { template <class T1, class T2> size_t operator()(const pair<T1, T2>& p){ const auto hash1 = hash<T1>{}(p.first);auto hash2 = hash<T2>{}(p.second); return hash1 ^ hash2;}};

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
       cin>>arr[i];
    
}