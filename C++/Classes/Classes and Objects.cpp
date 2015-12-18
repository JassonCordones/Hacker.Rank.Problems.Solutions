#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student{
  private:
    int scores[5];
  public:
    void Input(){
        int a;
        for (int i =0; i<5; ++i){
            cin>>a;
            scores[i] = a;
        }
    }
    int CalculateTotalScore(){
        return scores[0]+scores[1]+scores[2]+scores[3]+scores[4];
    }
};
int main() {
   int n;
     cin>>n;
     Student s[n];
     for(int i=0;i<n;i++)
      s[i].Input();
     int count=0;
     int krish_score=s[0].CalculateTotalScore();
     for(int i=1;i<n;i++)
    {
      int total=s[i].CalculateTotalScore();
      if(total>krish_score)
        count++;
    }
     cout<<count;
    return 0;
}