#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test_case,test;
    cin >> test_case;

    while(test_case--){
        int test;
        int cnt = 0;
        cin >> test;
        vector<int> train(test);
        
        for(int i = 0 ; i < test ; i++){
            cin >> train[i];
        }
        for(int i = 0 ; i < test ; i++){
            for(int j = 0 ; j < test - i - 1 ; j++){
                if(train[j + 1] < train[j]){
                    int temp = train[j + 1];
                    train[j + 1] = train[j];
                    train[j] = temp;
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }
    return 0;
}