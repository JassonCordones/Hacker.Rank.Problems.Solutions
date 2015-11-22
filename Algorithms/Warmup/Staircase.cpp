#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N,countLines = 0, spacesLimit;
    cin>>N;
    spacesLimit = N;
    while(countLines<N)
    {
        int countHashes =  N,countSpaces = 0;
        while(countSpaces < spacesLimit-1)
        {
            cout<<" ";
            ++countSpaces;
        }
        while(countHashes-1 >= countSpaces)
        {
            cout<<"#";
            --countHashes;
        }
            cout<<"\n";
            ++countLines;
            --spacesLimit;
            
    }
    return 0;
}