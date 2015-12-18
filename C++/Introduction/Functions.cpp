#include <iostream>
#include <cstdio>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
    {
        int max=0,i=0;
    while(i<4){
        if(max<a){max=a;}
        else if (max<b){max=b;}
        else if (max<c){max=c;}
        else if (max<d){max=d;}
        else return max;
        ++i;
        }
    return max;
    }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
