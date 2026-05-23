#include <iostream>
using namespace std;

int reverse(int num){
    int rev_num = 0;
    while(num > 0){
        rev_num = rev_num * 10 + (num % 10);
        num /= 10;
    }
    return rev_num;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    while(cin >> num){
        int prime_flag = 1,emirp = 1;
        for(int i = 2 ; i * i <= num ; i++){
            if(num % i == 0){
                prime_flag = 0;
                break;
            }
        }
        if(!prime_flag){
            cout << num << " is not prime.\n";
            continue;
        }
        if(prime_flag){
            int rev_num = reverse(num);
            if(rev_num == num){
                emirp = 0;
            }
            for(int j = 2 ; j * j <= rev_num ; j++){
                if(rev_num % j == 0){
                    emirp = 0;
                    break;
                }
            }
            if(prime_flag && emirp){
                cout << num << " is emirp.\n";
                continue;
            }
        }
        if(prime_flag && !emirp){
            cout << num << " is prime.\n";
        }
    }
    return 0;
}