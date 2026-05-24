#include <iostream>
using namespace std;

int GCD(int x,int y){
    while((x %= y) && (y %= x));
    return x + y;
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        int g = 0;
        for(int i = 1 ; i < n ; i++){
            for(int j = i + 1 ; j <= n ; j++){
                g += GCD(i,j);
            }   
        }
        cout << g << "\n";
    }
    return 0;
}