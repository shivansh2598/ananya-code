// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution {
  public:
  
    int sumofdigits(int num)
    {
        int sum = 0;
        while(num)
        {
            int r = num%10;
            sum += r;
            num /= 10;
        }
        return sum;
    }
    
    int reverse(int sum)
    {
        int rev = 0;
        while(sum)
        {
            int r = sum % 10;
            rev = rev*10 + r;
            sum /= 10;
        }
        return rev;
    }
  
    int isDigitSumPalindrome(int N) {
        int sum = sumofdigits(N);
        int rev = reverse(sum);
        
        if(rev == sum)
        return 1;
        
        return 0;
    }
};

/*
11 -> 11,
121 -> 121
33 -> 33,
*/



// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends