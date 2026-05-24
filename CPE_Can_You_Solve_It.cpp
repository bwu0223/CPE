#include <iostream>
using namespace std;

int main(){
    int test;
    long long x,y,n,s1,s2;
    cin >> test;
    for(int Case = 1 ; Case <= test ; Case++){
        cout << "Case " << Case << ": ";
        cin >> x >> y;
        if(x == 0 && y == 0){
            s1 = 0;
        }
        else{
            n = x + y - 1;
            s1 = (n * n + 3 * n) / 2 + (x + 1);
        }
        cin >> x >> y;
        n = x + y - 1;
        if(x == 0 && y == 0){
            s2 = 0;
        }
        else{
            n = x + y - 1;
            s2 = (n * n + 3 * n) / 2 + (x + 1);
        }
        cout << s2 - s1 << "\n";
    }
    return 0;
}