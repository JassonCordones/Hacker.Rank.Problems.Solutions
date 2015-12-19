#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int solve(string s)
{
    int r {0}, count {0};
    int l=s.length();
    for(int i=0; i<s.length();++i)
    {
        while(s[i]==s[i+1])
        {
            s.erase(i+1,1);
            r++;
        }
    }
    return r;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to 
STDOUT */
    int n {0}, res {0};
    cin>>n;
    string s;
    for(int i=0; i<n; ++i)
    {
        cin>>s;
        res = solve(s);
        cout<<res<<endl;
    }
    return 0;
}
