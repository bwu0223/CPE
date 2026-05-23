#include <iostream>
#include <algorithm>
using namespace std;

int a[] = {10000000,100000,1000,100};
string s[] = {"kuti","lakh","hajar","shata"};
string ans;

string num2str(long long x){
    string s = "";
    while(x){
        s += '0' + (x % 10);
        x /= 10;
    }
    reverse(s.begin(),s.end());
    return s;
}

void solve(long long x){
    if(x >= a[0]){
        solve(x / a[0]);
        ans += " " + s[0];
        x %= (int)a[0];
    }
    for(int i = 0 ; i < 4 ; i++){
        if(x / a[i] > 0){
            ans += " " + num2str(x / a[i]) + " " + s[i];
            x %= a[i];
        }
    }
    if(x > 0){
        ans += " " + num2str(x);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    int Case = 1;
    while(cin >> n){
        cout << "   " << Case++ << ".";
        if(n == 0){
            cout << " 0\n";
        }
        else{
            ans = "";
            solve(n);
            cout << ans << "\n";
        }
    }
    return 0;
}