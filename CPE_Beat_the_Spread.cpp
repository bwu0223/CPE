#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test,sum,min;
    cin >> test;
    while(test--){
        cin >> sum >> min;
        if((sum + min) % 2 || sum < min){
            cout << "impossible\n";
        }
        else{
            cout << (sum + min) / 2 << " " << (sum - min) / 2 << "\n";
        }
    }
    return 0;
}