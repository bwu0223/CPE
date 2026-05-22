#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    int test,test_day,p,h;
    cin >> test;
    while(test--){
        cin >> test_day >> p;
        vector<int> a(test_day + 1,0);
        for(int i = 0 ; i < p ; i++){
            cin >> h;
            for(int j = h ; j <= test_day ; j += h){
                a[j] = 1;
            }
        }
        for(int i = 6 ; i <= test_day ; i += 7){
            a[i] = 0;
        }
        for(int i = 7 ; i <= test_day ; i += 7){
            a[i] = 0;
        }
        int sum = 0;
        for(int i = 1 ; i <= test_day ; i++){
            sum += a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}