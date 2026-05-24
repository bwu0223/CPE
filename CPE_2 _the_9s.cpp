#include <iostream>
#include <string>
using namespace std;

int deg(int x){
    if(x == 9){
        return 1;
    }
    int sum = 0;
    while(x){
        sum += x % 10;
        x /= 10;
    }
    return 1 + deg(sum);
}

int main(){
    string num,s;
    while(cin >> num){
        getline(cin,s);
        if(num == "0"){
            break;
        }
        int sum = 0;
        for(auto i : num){
            sum += i - '0';
        }
        if(sum % 9 != 0){
            cout << num << " is not a multiple of 9.\n";
        }
        else{
            cout << num << " is a multiple of 9 and has 9-degree " << deg(sum) << ".\n";
        }  
    }
    return 0;
}