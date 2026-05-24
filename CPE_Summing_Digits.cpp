#include <iostream>
#include <string>
using namespace std;

int cnt(int x){
    int add = 0;
    while(x){
        add += x % 10;
        x /= 10;
    }
    if(add >= 10){
        return cnt(add);
    }
    else{
        return add;
    }
}

int main(){
    int num;
    while(cin >> num){
        if(num == 0){
            break;
        }
        cout << cnt(num) << "\n";
    }
    return 0;
}