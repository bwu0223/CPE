#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> fib;

int main(){
    int test_case;
    int f0 = 1, f1 = 2;
    fib.push_back(f0);
    fib.push_back(f1);
    while(f1 <= 1e8){
        int f2 = f0 + f1;
        fib.push_back(f2);
        f0 = f1;
        f1 = f2;
    }
    reverse(fib.begin(),fib.end());
    cin >> test_case;
    while(test_case--){
        int test;
        int flag = 0;
        cin >> test;
        cout << test << " = ";

        for(int i = 0 ; i < fib.size() ; i++){
            if(test >= fib[i]){
                test -= fib[i];
                flag = 1;
                cout << "1";
            }
            else if(flag){
                cout << "0";
            }
        }
        cout << " (fib)\n";
    }
    return 0;
}