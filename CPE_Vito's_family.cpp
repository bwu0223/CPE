#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;
    while(test_case--){
        int test,temp;
        cin >> test;
        vector<int> num(test);
        temp = test;
        for(int i = 0; i < test; i++){
            cin >> num[i];
        }
        sort(num.begin(),num.end());
        int med = num[test / 2],sum = 0;
        for(auto i : num){
            sum += abs(i - med);
        }
        cout << sum << "\n";
    }
    return 0;
}