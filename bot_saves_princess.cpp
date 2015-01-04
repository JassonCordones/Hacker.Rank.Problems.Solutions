#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    vector <string> s;
    for(int q=0; q<n; q++)
    {
        for(int w=0; w<n; w++)
        {
            s.push_back(grid[q].substr (w,1));
        }
    }
    if(s[0]=="p")   
    {
        for(int i=0; i<(n-1)/2; i++)
            {
                std::cout<<"LEFT"<<endl;
            }
        for(int j=0; j<(n-1)/2; ++j)
            {
                std::cout<<"UP"<<endl;
            }
    }
    else if(s[n-1]=="p")
    {
        for(int i=0; i<(n-1)/2; i++)
            {
                cout<<"RIGHT"<<endl;    
            }
        for(int j=0; j<(n-1)/2; ++j)
            {           
                cout<<"UP"<<endl;           
            }
    }
    else if(s[(n*n)-n]=="p")
    {
        for(int i=0; i<(n-1)/2; i++)
            {
                cout<<"LEFT"<<endl;
            }
        for(int j=0; j<(n-1)/2; ++j)
            {
                cout<<"DOWN"<<endl;
            }
    }
    else if(s[(n*n)-2]=="p")
    {
        for(int i=0; i<(n-1)/2; i++)
            {
                cout<<"RIGHT"<<endl;
            }
        for(int j=0; j<(n-1)/2; ++j)
            {
                cout<<"DOWN"<<endl;
            }   
    }
   /* else 
        {
            cout<<"no valid game";
        }
    */
    
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }
    //for(int j=0; j<grid.size(); j++){cout<<grid[j];}
    displayPathtoPrincess(m,grid);

    return 0;
}