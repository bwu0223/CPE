#include <iostream>
#include <string>
using namespace std;

int cnt = 0;
string s;

int main(){
    while(getline(cin,s)){
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '\"'){
                if(cnt % 2 == 0){
                    cout << "``";
                }
                else{
                    cout << "''";
                }
                cnt++;
            }
            else{
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}