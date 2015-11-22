#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n=0;
    long long T,SUM=0;
    cin>>n;
    for(int i = 1; i<= n; ++i)
    {
       cin>>T;
       SUM  +=T;
    }
    cout<<SUM;
    return 0;
}
