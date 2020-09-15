#include<bits/stdc++.h>
using namespace std;

int sumdigit(int n)
{
    int sum = 0;
    while(n)
    {
        int x = n%10;
        sum += x;
        n/=10;
    }
    return sum;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
    //    cout<<sumdigit(n)<<endl;
       while(true)
       {
           int temp = sumdigit(n);
           if((temp / 10) == 0)
           {
               cout<<temp<<endl;
               break;
           }
       }
   }
}

/*
sum = 0;
double xx = 2.9999999999999999999999
int n = xx
int x = n%10;     
sum += x;
n = 54
5
55,5245
n = 55
x = n%10           5/10 = 10*0 + 5
sum += x
n /= 10  --> n = n/10
0
*/