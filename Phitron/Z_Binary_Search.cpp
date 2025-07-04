#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(binary_search(nums.begin(),nums.end(),x)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}