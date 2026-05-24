#include <iostream>
using namespace std;

int main(){
    int start,end;
    while(cin >> start >> end){
        if(start == 0 && end == 0){
            break;
        }
        int cnt = 0;
        for(int i = 0 ; i * i <= end ; i++){
            if((i * i >= start) && (i * i <= end)){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}