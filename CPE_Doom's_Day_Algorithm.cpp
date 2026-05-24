#include <iostream>
#include <cmath>
using namespace std;
int doom[12] = {10,21,7,4,9,6,11,8,5,10,7,12};
string week[7] = {"Monday","Tuesday","Wednesday","Thursday",
                    "Friday","Saturday","Sunday"};

int main(){
    int test;
    cin >> test;
    while(test--){
        int month,day;
        cin >> month >> day;
        int doom_day = doom[month - 1];
        int day_week = (day - doom_day) % 7;
        if(day_week < 0){
            day_week += 7;
        }
        cout << week[day_week] << "\n";
    }
    return 0;
}