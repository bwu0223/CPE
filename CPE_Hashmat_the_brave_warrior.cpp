#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long num1,num2;
    while(cin >> num1 >> num2){
        cout << abs(num1 - num2) << "\n";
    }
    return 0;
}