#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

char a[105][105];
int dx[] = {1,-1,0,0,-1,1,-1,1};
int dy[] = {0,0,1,-1,1,1,-1,-1};

int main(){
    int n,m,Case = 1;
    string s;
    while(cin >> n >> m){
        vector<vector<int>> b(105,vector<int>(105,0));
        if(n == 0 && m == 0){
            break;
        }
        //把輸入的地圖轉到二維陣列。輸入的是 s(一整條字串) 再把那條字串上所有字元存到地圖(a)//
        for(int i = 0 ; i < n ; i++){
            cin >> s;
            for(int j = 0 ; j < m ; j++){
                a[i][j] = s[j];
            }
        }
        //開始掃描地圖上每個點。如果有掃到炸彈，就在空地圖(b)上顯示 -1，如果沒有，就在周圍8格都 +1//
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(a[i][j] == '*'){
                    b[i][j] = -1;
                }
                else{
                    for(int k = 0 ; k < 8 ; k++){
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if(x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '*'){
                            b[i][j]++;
                        }
                    }
                }
            }
        }
        if(Case > 1){
            cout << "\n";
        }
        cout << "Field #" << Case++ << ":\n";
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(b[i][j] == -1){
                    cout << '*';
                }
                else{
                    cout << b[i][j];
                }
            }
            cout << "\n";
        }
    }
    return 0;
}