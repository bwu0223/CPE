#include <iostream>
#include <string>
using namespace std;

int main(){
    string num,s;
    while(cin >> num){
        getline(cin,s);
        if(num == "0"){
            break;
        }
        
        int nums = stoi(num),cnt = 0;
        string bin = "";
        while(nums > 0){
            bin = char('0' + (nums % 2)) + bin;
            nums /= 2;
        }
        for(auto i : bin){
            if(i == '1'){
                cnt++;
            }
        }
        cout << "The parity of " << bin << " is " << cnt << " (mod 2).\n";
    }
    return 0;
}