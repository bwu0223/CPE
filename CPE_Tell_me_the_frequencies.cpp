#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define table pair<int,int>

bool cmp(table a,table b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    else{
        return a.second > b.second;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string word;
    while(getline(cin,word)){
        table abc_table[256];
        for(int i = 0 ; i < 256 ; i++){
            abc_table[i] = {0,i};
        }
        for(int j= 0 ; j < word.size() ; j++){
            abc_table[(int)word[j]].first++;
        }
        sort(abc_table,abc_table + 256,cmp);
        for(auto i : abc_table){
            if(i.first > 0){
                cout << i.second << " " << i.first << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}