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
    int N,N2,M,tmp; //Declare variables for taking imputs
    vector <int> A; //Declare vector
    vector <int> B; //Declare vector
    cin>>N; //Read N (A size)
    N2 = N+1; //N2 = N+1 (B size) 
    for(int i = 0; i<N; ++i)
    {
    cin>>tmp; //Read tmp 
    A.push_back(tmp); //Push tmp into A
    tmp = 0; //Reset tmp
    }
    A.push_back(0); //append 0 cause of the difference in size
    for(int j = 0; j<N2; ++j){
    cin>>tmp; //Read tmp 
    B.push_back(tmp);//Push tmp into B
    tmp = 0; //Reset tmp
    }
    mystery_number(A,B); //Call mystery_number function

    return 0;
}
