/*  Method - 2   */

int digit(int num)
{
    int s = 0;
    while(num)
    {
        int r = num%10;
        if(r == 0)
            s = s*10 + 5;                
        else
            s = 10*s + r;
        
        num /= 10;
    }
    return s;
}


int convertFive(int n)
{
    int num = digit(n);
    num = digit(num);
    return num;
}


/*   Method-1 */

int convertFive(int n)
{
    string str = to_string(n);
    for(int i = 0; i<str.size(); i++)
    {
        if(str[i] == '0')
            str[i] = '5';
    }
    
    int ans = stoi(str);
    return ans;
}



/* ------------ */

//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[]){
        int num = 0;
        for(int i = 0; i<N; i++)
        {
            num ^= arr[i];
        }
        
        return num;
    }
};

/*
    1^0 = 1,
    0^1 = 1,
    1^1 = 0,
    0^0 = 0


    23 ^ 18 =>   10111 => 3
    
                 10010
                 00101
                 
    x ^ 0 =>   10101011 => x (property-1)
               00000000
               10101011
    
    x ^ x =>   0   (propery - 2)
    
    1^2^3 = 1^(2^3) = (1^2)^3  (proerty-3) xor -> associative in nature
    
    int num = 0;
    num = num^arr[i];
    
    1^2^3^2^1  -> 0^3 -> 3 ans
*/