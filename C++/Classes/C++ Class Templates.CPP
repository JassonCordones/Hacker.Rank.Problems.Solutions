#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
template <class T>
class AddElements {
    T element1;
    T element2;
    public:
        AddElements (T arg1) {
            element1=arg1;
        }
        T add (T arg2) {
            element2=arg2;
            return element1+element2;
        }
};
template <>
class AddElements <string> {
    string element3;
    public:
    AddElements (string arg3) {
        element3=arg3;
    }
    string concatenate (string arg4)
    {
        return element3+arg4;
    }
};
int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}