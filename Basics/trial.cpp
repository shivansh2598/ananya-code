#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back

void findlcs(string s, vector<int> &lcs)
{
    int i = 0;
    int j = 1;
    lcs[0] = 0;
    while (j < s.size())
    {
        if (s[i] == s[j])
        {
            lcs[j] = i + 1;
            i++;
            j++;
        }
        else
        {
            if (i == 0)
            {
                lcs[j] = 0;
                j++;
            }
            else
                i = lcs[i - 1];
        }
    }
}

int count(string t, string temp)
{
    int i = 0;
    int j = 0;
    int count = 0;
    while (j < t.size())
    {
        if (t[j] == temp[i])
        {
            i++;
            j++;
        }
        else
        {
            return -1;
        }

        if (i == temp.size())
        {
            count++;
            i = 0;
            if(j == t.size())
            return count;
        }
    }

    return -1;
}

int find(string s, string t)
{
    int len = count(s, t);
    if(len == -1)
    return -1;

    vector<int> lcs(t.size(), 0);
    findlcs(t, lcs);
    int val = lcs[t.size() - 1];

    string temp = "";
    for (int i = 0; i < val; i++)
        temp += t[i];

    int len2 = count(t, temp);
    if(len2 == -1)
    return t.size();
    else
        return temp.size();
    
    return -1;
}

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;

    cout << find(s, t) << endl;
}