#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

bool cmp(pair<int,char> a,pair<int,char> b){
    if(a.first != b.first){
        return a.first > b.first;
    }
    else{
        return a.second < b.second;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int,char>> abc(26);
    for(int i = 0 ; i < 26 ; i++){
        abc[i] = {0,'A' + i};
    }
    int test_case;
    string s;
    cin >> test_case;
    getline(cin,s);
    while(test_case--){
        getline(cin,s);
        for(int i = 0 ; i < s.size() ; i++){
            if(isalpha(s[i])){
                abc[toupper(s[i]) - 'A'].first++;
            }
        }
    }
    sort(abc.begin(),abc.end(),cmp);
    for(auto i: abc){
        if(i.first > 0){
            cout << i.second << " " << i.first << "\n";
        }
    }
    return 0;
}