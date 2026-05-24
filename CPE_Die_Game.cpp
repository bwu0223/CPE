#include <iostream>
using namespace std;

int main(){
    int test;
    string s;

    while(cin >> test){
        if(test == 0){
            break;
        }
        int top = 1, bottom = 6;
        int north = 2, south = 5;
        int west = 3, east = 4;

        while(test--){
            cin >> s;
            if(s == "east"){
                int tmp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = tmp;
            }
            else if(s == "west"){
                int tmp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = tmp;
            }
            else if(s == "north"){
                int tmp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = tmp;
            }
            else if(s == "south"){
                int tmp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = tmp;
            }
        }
        cout << top << "\n";
    }
}