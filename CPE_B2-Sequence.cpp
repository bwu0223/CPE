#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int test,cnt = 1;
    while(cin >> test){
        vector<int> a(test);
        for(int i = 0 ; i < test ; i++){
            cin >> a[i];
        }
        set<int> st;
        bool flag = true;
        for(int i = 0 ; i < test ; i++){
            for(int j = i ; j < test ; j++){
                int tmp = a[i] + a[j];
                if(st.count(tmp)){
                    flag = false;
                    break;
                }
                st.insert(tmp);
            }
            if(!flag){
                break;
            }
        }
        cout << "Case #" << cnt++;
        if(flag){
            cout << ": It is a B2-Sequence.\n";
        }
        else{
            cout << ": It is not a B2-Sequence.\n";
        }
    }
    return 0;
}