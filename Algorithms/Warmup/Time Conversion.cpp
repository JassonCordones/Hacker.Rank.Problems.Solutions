#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string time,hours,minutes,seconds,meridian;
    int newhour;
    stringstream s;
    cin>>time;
    hours   = time.substr(0,2);
    minutes = time.substr(3,2);
    seconds = time.substr(6,2);
    meridian= time.substr(8,2);
    if(meridian=="AM" && hours != "12")
    {
       cout<<hours<<":"<<minutes<<":"<<seconds;
    }
    else if(meridian == "AM" &&  hours =="12")
    {
        hours = "00";
        cout<<hours<<":"<<minutes<<":"<<seconds;

    }
    else if(meridian == "PM" && hours!= "12")
    {
        stringstream s(hours);
        s >> newhour;
        newhour = newhour+12;
        cout<<newhour<<":"<<minutes<<":"<<seconds;
    }
    else
    {
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }
    system("PAUSE");
    return 0;
}