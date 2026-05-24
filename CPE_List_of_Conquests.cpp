#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;
    map<string,int> mp;
    string s;
    getline(cin,s);
    while(test--){
        cin >> s;
        mp[s]++;
        getline(cin,s);
    }
    for(auto i : mp){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}