#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int v {0},n {0}, count {0};
    array <int,1000> elem;
    cin>>v>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>elem[i];
        count++;
        if(elem[i]==v){cout<<count-1;}
    }
    
    return 0;
}
