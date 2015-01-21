#include<iostream>
#include<vector>
using namespace std;
void nextMove(int posr, int posc, vector <string> board) {
    //add logic here
    vector <string> v;
    int di,dj;
    int n = board.size(); 
    for(int i=0; i<n; ++i)
    {
        for(int j=0;j<n; ++j)
        {
            v.push_back(board[i].substr(j,1));
        }
    }
    for(int k=0; k<n*n; ++k)
    {
        if(v[k]=="d")
        {
            di=k/n;
            dj=k%n;
        }
    }
    if(di<posr && dj==posc || di<posr && dj<posc || di<posr && dj>posc)
    {
        cout<<"UP"<<endl;
    }
    if(di>posr && dj==posc || di>posr && dj<posc || di>posr && dj>posc)
    {
        cout<<"DOWN"<<endl;
    }
    if(di==posr && dj<posc)
    {
        cout<<"LEFT"<<endl;
    }
    if(di==posr && dj>posc)
    {
        cout<<"RIGHT"<<endl;
    }   
    if(di==posr && dj==posc)
    {
        cout<<"CLEAN"<<endl;
    }
}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
