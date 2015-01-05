#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,j{0};
    unsigned int n,n2;
    vector <unsigned int> list;
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        cin>>n2;
        list.push_back(n2);
    }
    //reverse(list.begin(), list.end());
    while(list.size()>0)
    {
        
        n=~list[j];
        cout<<n<<endl;
        ++j;
        list.pop_back();
    }
    return 0;
}
