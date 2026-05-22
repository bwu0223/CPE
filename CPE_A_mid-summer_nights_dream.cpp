#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int main(){
    int test_case;
    while(cin >> test_case){
        vector<int> nums(test_case);
        int i = 0;
        int temp = test_case;
        while(temp--){
            cin >> nums[i];
            i++;
        }
        sort(nums.begin(),nums.end());
        int mid1 = nums[(test_case - 1) / 2];
        int mid2 = nums[test_case / 2];
        int ans = 0;
        for(int i = 0 ; i < test_case ; i++){
            if(nums[i] >= mid1 && nums[i] <= mid2){
                ans++;
            }
        }
        cout << mid1 << " " << ans << " " << mid2 - mid1 + 1 << "\n";
    }
    return 0;
}