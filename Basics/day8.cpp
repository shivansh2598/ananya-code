/*
[,,,,,,,,,,,]
[[,,,,,,,],[2,3,4,5,6,7,12],[,,,,,,],[,,,,,,],[,,,,,,],[,,,,,,]] -> vect1[1][2]
vect1 =[
    0 1 2 3
    []
0->[1,2,3,4],         
1->[4,5,6,7],    -> vect1[1][2]  -> n = vect1.size() -> 3.  m = vect1[0].size() -> 4. 
2->[7,8,9,10]
]

int arr[n][m];
*/

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
   vector<int>vect;
    vector<vector<int>>vect1;
    for(int i = 0; i<3; i++)
    {
        vector<int>temp;
        for(int j = 0; j<4; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        vect1.push_back(temp);
    }

    for(int i = 0; i<vect1.size(); i++)
    {
        for(int j = 0; j<vect1[0].size(); j++)
        {
            cout<<vect1[i][j]<<" ";
        }
        cout<<endl;
    }
}