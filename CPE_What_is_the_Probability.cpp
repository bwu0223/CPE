#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test_case,players,index;
    double p;
    cin >> test_case;
    while(test_case--){
        cin >> players >> p >> index;
        if(p == 0){
            cout << "0.0000\n";
            continue;
        }
        double q = 1 - p;
        double up = pow(q,index - 1) * p;
        double down = 1.0 - pow(q,players);
        cout << fixed << setprecision(4) << up / down << "\n";
    }
    return 0;
}