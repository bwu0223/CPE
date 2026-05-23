#include <iostream>
#include <cstring>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long num,div;
    while(cin >> num >> div){
        if(div == 0 || div == 1){
            cout << "Boring!\n";
            continue;
        }
        long long div_nums[100];
        memset(div_nums,0,sizeof(div_nums));
        div_nums[0] = num;
        int flag = 0,i = 1;
        while(num > 1){
            if(num % div == 0){
                int can_div = num / div;
                div_nums[i] = can_div;
                num /= div;
                i++;
            }
            else{
                cout << "Boring!\n";
                flag = 1;
                break;
            }
        }
        if(flag){
            continue;
        }
        for(int i = 0 ; div_nums[i] != 0 ; i++){
            cout << div_nums[i] << " ";
        }
        cout << "\n";
    }
    return 0;

}