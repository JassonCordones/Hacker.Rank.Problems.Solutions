#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,A;
    array <int,1000> a = {};
    cin>>N;
    for(int i=0; i<N; ++i)
        {
        cin>>A;
        a[i]=A;
    }
    for (int j = N-1; j>=0 ; --j)
    {
        cout<<a[j]<<" ";    
    }
    /*for (auto rit = a.rbegin(); rit < a.rend(); ++rit)
        {
        cout<<*rit<<" ";
    }*/
    return 0;
}
