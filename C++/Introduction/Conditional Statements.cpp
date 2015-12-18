#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    string a="one",b="two",c="three",d="four",e="five",f="six", g="seven", h="eight", i="nine", j="Greater than 9";
    cin>>n;
    if(n==1){
        cout<<a;
    }else if (n == 2){
        cout<<b;
    }else if (n == 3){
        cout<<c;
    }else if (n == 4){
        cout<<d;
    }else if (n == 5){
        cout<<e;
    }else if (n == 6){
        cout<<f;
    }else if (n == 7){
        cout<<g;
    }else if (n == 8){
        cout<<h;
    }else if (n == 9){
        cout<<i;
    }else if (n > 9){
        cout<<j;
    }
    
   return 0;
}