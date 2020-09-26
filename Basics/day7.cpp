#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define infinity INT_MAX


int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, m;
         cin>>n>>m;
         
         vector<bool>visited(pow(10,5)+1, false);
         for(int i =0; i<n; i++)
         {
             int x;
             cin>>x;
             visited[x] = true;
         }
         
         int ans = 0;
         
         for(int i = 0; i<m; i++)
         {
             int x;
             cin>>x;
             if(visited[x])
             {
                 ans++;
                 visited[x] = false;
             }
         }
         
         cout<<ans<<endl;
     }
	return 0;
}