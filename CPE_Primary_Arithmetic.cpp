#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num1,num2;
    while(cin >> num1 >> num2){
        if(num1 == 0 && num2 == 0){
            break;
        }
        int carry_cnt = 0;
        int carry = 0;
        while(num1 > 0 || num2 > 0){
            if((num1 % 10) + (num2 % 10) + carry >= 10){
                carry_cnt++;
                carry = 1;
            }
            else{
                carry = 0;
            }
            num1 /= 10;
            num2 /= 10;
        }
        if(carry_cnt == 0){
            cout << "No carry operation.\n";
        }
        else if(carry_cnt == 1){
            cout << "1 carry operation.\n";
        }
        else{
            cout << carry_cnt << " carry operations.\n";
        }
    }
    return 0;
}