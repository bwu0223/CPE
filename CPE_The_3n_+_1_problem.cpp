#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i,j;
    while(cin >> i >> j){
        int Max = 0;
        for(int k = min(i,j) ; k <= max(i ,j) ; k++){
            int n1 = k;
            int cnt = 1;
            while(n1 != 1){
                if(n1 % 2){
                    n1 = 3 * n1 + 1;
                }
                else{
                    n1 /= 2;
                }
                cnt++;
            }
            Max = max(cnt,Max);
        }
        cout << i << " " << j << " " << Max << "\n";
    }
    return 0;
}