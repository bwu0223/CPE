#include <iostream>
using namespace std;

int main(){
    long long start,find;
    while(cin >> start >> find){
        long long i = start,sum = 0;
        while(1){
            if((sum + i) >= find && sum <= find){
                break;
            }
            sum += i;
            i++;
        }
        cout << i << "\n";
    }
    return 0;
}