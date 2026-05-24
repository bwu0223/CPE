#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string s;
int x;
vector<int> coff;

int main(){
    while(cin >> x){
        getline(cin,s);
        getline(cin,s);
        stringstream ss(s);
        coff.clear();

        while(ss >> s){
            coff.push_back(stoi(s));
        }
        //最後一項常數微分完後會變 0，可以拿掉//
        coff.pop_back();
        //把原本的降冪排列改成昇冪排列，後面的 for 迴圈比較好算//
        reverse(coff.begin(),coff.end());
        long long mul = 1;
        int ans = 0;
        //微分算值，coff 是原本係數，(i + 1) 是上一個次方，mul 是微分完剩下的 x//
        for(int i = 0 ; i < coff.size() ; i++){
            ans += coff[i] * (i + 1) * mul;
            mul *= x;
        }
        cout << ans << "\n";
    }
    return 0;
}