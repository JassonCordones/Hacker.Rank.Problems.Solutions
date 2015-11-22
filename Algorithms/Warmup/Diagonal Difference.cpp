#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int applyMaths(vector<int> a, int b)
    {
   int D1=0,D2=0,R=0;
        for(int i=0; i<b*b; i=i+b+1)
        {
            D1 += a[i];
        }
        for(int j=b-1; j<(b*b)-(b-1); j=j+b-1)
        {
            D2 += a[j];
        }
        R = abs(D1-D2);
        return R;
    }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,M,R;
    vector <int> matrix;
    cin>>N;
    for(int i=0; i<N*N; ++i)
    {
        cin>>M;
        matrix.push_back(M);
    }
    R = applyMaths(matrix,N);
    cout<<R;
    return 0;
}
