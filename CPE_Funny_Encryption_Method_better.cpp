#include <iostream>
#include <string>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        string num;
        cin >> num;
        int dec_num = stoi(num);
        int hex_num = stoi(num,nullptr,16);
        int x1 = __builtin_popcount(dec_num);
        int x2 = __builtin_popcount(hex_num);
        cout << x1 << " " << x2 << endl;
    }
    return 0;
}