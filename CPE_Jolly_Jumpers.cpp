#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test;
    while(cin >> test){
        int pre,now;
        vector<int> table(test,0);
        cin >> pre;
        for(int i = 1 ; i < test ; i++){
            cin >> now;
            table[abs(pre - now)]++;
            pre = now;
        }
        int flag = 1;
        for(int j = 1 ; j < test ; j++){
            if(table[j] != 1){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "Jolly\n";
        }
        else{
            cout << "Not jolly\n";
        }
    }
    return 0;
}

   