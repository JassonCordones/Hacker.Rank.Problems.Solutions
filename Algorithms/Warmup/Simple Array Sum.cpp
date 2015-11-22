#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N,i=0,T,R;
    cin>>N;
    while (i<N)
        {
        cin>>T;
        R+=T;
        ++i;
    }
    cout<<R;
    return 0;
}