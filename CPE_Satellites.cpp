#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define pi atan(1.0) * 4 //pi = 4 * arctan(1)//

int main(){
    double r = 6440.0,s,a;
    string unit;
    double chord,arc;
    while(cin >> s >> a >> unit){
        if(unit == "min"){
            a /= 60.0;
        }
        if(a > 180.0){
            a = 360.0 - a;
        }
        //弧長 arc = 2 * PI * R * a / 360//
        //弦長 chord = 2* R * cos((90 – a / 2) / 180 * PI)//
        chord = (r + s) * cos((90.0 - a / 2.0) / 180.0 * pi) * 2.0;
        arc = 2.0 * pi * (r + s) * a / 360.0;
        cout << fixed << setprecision(6) << arc << " " << chord << "\n"; 
    }
    return 0;
}