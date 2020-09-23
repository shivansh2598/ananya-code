class Solution {
public:
    
    int findsize(int num)
    {
        int count = 0;
        while(num)
        {
            count++;
            num/=10;
        }
        return count;
    }
    
    int construct(int initial, int size)
    {
        int num = initial;
        for(int i = 0; i<size; i++)
        {
            int temp = (num%10)+1;
            num = (num*10) + temp;
        }
        return num;
    }
    
    int findnext(int num, int size)
    {
        int val = pow(10, size-1);
        int mstsig = (num/val) + 1;
        
        int num1;
        if(mstsig > (10 - size))
            num1 = construct(1, size);
        else
            num1 = construct(mstsig, size-1);
        
        return num1;
    }
    
    int findfirst(int num, int size)
    {
        
        int val = pow(10, size-1);
        int mstsig = (num/val);
        
        if(mstsig > (10 - size)) //if first char is greater. 
            return findnext(num, size);
        
         int num1 = construct(mstsig, size-1);
        
        if(num1 >= num)
            return num1;
        else
            return findnext(num1, size);
    }
    
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int size = findsize(low);
        int num = findfirst(low, size);
        while(num <= high)
        {
            ans.push_back(num);
            size = findsize(num);
            num = findnext(num, size);
        }
        
        return ans;
    }
};