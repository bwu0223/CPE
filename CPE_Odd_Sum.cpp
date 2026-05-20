#include <iostream>
using namespace std;

int main(){
    int test,start,end;
    int cnt = 1;
    cin >> test;
    
    while(cin >> start >> end){
    	int sum = 0;
    	for(int i = start ; i <= end ; i++){
    		if(i % 2 == 1){
    			sum += i;
    		}
    	}
    	cout << "Case " << cnt << ": " << sum << "\n";
    	cnt++;
    }
    return 0;
}