#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s1,s2;
    while(getline(cin,s1)){
        getline(cin,s2);
        int cnt1[256] = {0};
        int cnt2[256] = {0};

        for(auto i : s1){
            cnt1[i]++;
        }
        for(auto j: s2){
            cnt2[j]++;
        }
        string same = "";
        for(int i = 0 ; i < 256 ; i++){
            int times = min(cnt1[i],cnt2[i]);
            while(times--){
                same += (char)i;
            }
        }
        cout << same << "\n";
    }
    return 0;
}
