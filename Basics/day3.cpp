#include<bits/stdc++.h>
using namespace std;
// typedef long long int lli;

int sumofdigits(long long int number)
{
    int sum = 0;
    while(number){
        int r = number%10;
        sum += r;
        number /= 10;
    }
    return sum;
}

int main()
{
	int te;
	cin>>te;
	while(te--)
	{
	    long long int n;
	    cin>>n;
	    
	    while(true)
	    {
	        int sumzz = sumofdigits(n);
	        if(sumzz< 10)
	        {
	            cout<<sumzz<<endl;
	            break;
	        }
	        else
	            n = sumzz;
	    }
	    
	}
	return 0;
}


/*

x,y
x < y                                       23 = 10*2 + 3
x%y = x                                     500 = 0*501 + x , x = 500     x = y*k + r    k>=0, 0 <=r <= y-1
    -65536 <= i <= 65536
    
    -65536 -65535 ....... 0 ...... 65355 65536 
    
    int -> 10^6
    long int -> 10^9
    long long int -> 10^18 -> 10000000000000000
    111111111111111111111111111111
*/