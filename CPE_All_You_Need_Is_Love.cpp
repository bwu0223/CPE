#include <iostream>
using namespace std;

//很強的輾轉相除法寫法//
int gcd(int a,int b){
    while((a %= b) && (b %= a));
    return a + b;
}

int main(){
    int test,test_cnt = 1;
    string s1,s2;
    cin >> test;
    while(test--){
        cin >> s1 >> s2;
        int n1 = 0,n2 = 0;
        //把二進位字串轉十進位，n1 = n1 * 2 + bit//
        for(int i = 0 ; i < s1.size() ; i++){
            n1 *= 2;
            n1 += s1[i] - '0';
        }
        for(int j = 0 ; j < s2.size() ; j++){
            n2 *= 2;
            n2 += s2[j] - '0';
        }
        cout << "Pair #" << test_cnt++;
        if(gcd(n1,n2) > 1){
            cout << ": All you need is love!\n";
        }
        else{
            cout << ": Love is not all you need!\n";
        }
    }
    return 0;
}