#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static void digit(int x) {
    vector <int> digits;
    int a,count=0,b=x;

    while (x > 0)
    {
        a = x%10;
        digits.push_back(a);
        x /= 10;
    }
    for (int j=0; j<digits.size(); ++j)
    {
	if(digits[j]==0){continue;}
    	if(b%digits[j]==0)
	{
		count++;
	}
    }
	cout<<count<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    int r;
    cin>>n;
    for (int i=0; i<n; ++i)
    {
        cin>>m;
        digit(m);
    }
    return 0;
}
