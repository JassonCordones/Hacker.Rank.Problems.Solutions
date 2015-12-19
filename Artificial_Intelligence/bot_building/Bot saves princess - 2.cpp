#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
    //your logic here
    vector <string> s;
    int pi, pj;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            s.push_back(grid[i].substr(j,1));
        }            
    }
    for(int k=0; k<n*n; ++k)
    {
        if(s[k]=="p")
            {
                pi=k/n;
                pj=k%n;  
            }
    }
    if(pi<r && pj == c || pi<r && pj<c || pi<r && pj>c)
    {
        cout<<"UP"<<endl;
    }
    if(pi>r && pj == c || pi>r && pj<c || pi>r && pj>c)
    {
        cout<<"DOWN"<<endl;
    }
    if(pi==r && pj < c)
    {
        cout<<"LEFT"<<endl;
    }
    if(pi==r && pj > c)
    {
        cout<<"RIGHT"<<endl;
    }
    
}
int main(void) {
    int n, r, c;
    vector <string> grid;
    cin >> n;
    cin >> r;
    cin >> c;
    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
