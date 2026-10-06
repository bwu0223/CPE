#include <iostream>
using namespace std;

int steps(long& x, long& y){
    long long total = x + y;
    return (1 + total) * total / 2 + x;
}

int main(){
    int tc = 0;
    cin >> tc;
    for (int i = 1; i <= tc; i++){
        cout << "Case " << i << ": ";
        long x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << steps(x2, y2)-steps(x1, y1) << endl;
    }
    return 0;
}