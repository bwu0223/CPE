#include <iostream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test,cost,q,x;
    cin >> test;
    for(int Case = 1 ; Case <= test ; Case++){
        if(Case > 1){
            cout << "\n";
        }
        map<int,int> mp;
        for(int j = 0 ; j < 36 ; j++){
            cin >> cost;
            mp[j] = cost;
        }
        cout << "Case " << Case << ":\n";
        cin >> q;
        while(q--){
            cin >> x;
            cout << "Cheapest base(s) for number " << x << ":";
            int mn = 0x7FFFFFFF;
            map<int,int> ans;
            for(int i = 2 ; i <= 36 ; i++){
                int n = x;
                cost = 0;
                while(n){
                    cost += mp[n % i];
                    n /= i;
                }
                ans[i] = cost;
                mn = min(mn,cost);
            }
            for(int i = 2 ; i <= 36 ; i++){
                if(ans[i] == mn){
                    cout << " " << i;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}