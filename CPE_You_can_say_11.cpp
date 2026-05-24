#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string num;
    while(cin >> num){
        if(num == "0"){
            break;
        }
        int odd_sum = 0,even_sum = 0;
        for(int i = 0 ; i < num.size() ; i++){
            if(i % 2 == 0){
                even_sum += num[i] - '0';
            }
            else{
                odd_sum += num[i] - '0';
            }
        }
        if((odd_sum - even_sum) % 11 == 0){
            cout << num << " is a multiple of 11.\n";
        }
        else{
            cout << num << " is not a multiple of 11.\n";
        }
    }
    return 0;
}