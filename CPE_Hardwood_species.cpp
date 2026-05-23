#include <iostream>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    string s;
    cin >> test;
    getline(cin,s);
    getline(cin,s);
    while(test--){
        map <string,int> mp;
        int sum = 0;
        while(getline(cin,s) && s != ""){
            mp[s]++;
            sum++;
        }
        for(auto i : mp){
            cout << i.first << " " << fixed << setprecision(4) << (double)i.second / sum * 100 << "\n";
        }
        cout << "\n";
    }
    return 0;
}