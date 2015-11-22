#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void mystery_number(vector <int> X, vector <int> Y){
    long int t,sum=0;
    sort (X.begin(),X.end());
    sort (Y.begin(),Y.end());
    for(int i = 0; i<Y.size(); ++i)
    {
    sum += Y[i]-X[i];

    }
    cout<<sum;
 }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,N2,M,tmp;
    vector <int> A;
    vector <int> B;
    cin>>N;
    N2 = N+1;
    for(int i = 0; i<N; ++i)
    {
    cin>>tmp;
    A.push_back(tmp);
    tmp = 0;
    }
    A.push_back(0); //append 0 cause of the difference in size
    for(int j = 0; j<N2; ++j){
    cin>>tmp;
    B.push_back(tmp);
    tmp = 0;
    }
    mystery_number(A,B);

    return 0;
}
