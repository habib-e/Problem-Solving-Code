#include<bits/stdc++.h>
using namespace std;
//.h file code
//.cpp file code:

vector<int>twoSum(vector<int> &nums,int target);
twoSum(int nums[],int target){

    unordered_map<int,int>mp;
    for(int i=0;i<4;i++){
        int complement =target - nums[i];
        if(mp.find(complement) !=mp.end()){
            return mp[complement],i;
        }
        mp.emplace(nums[i],i);
    }
    cout<<"No two sum solution exist"<<endl;


}
int main(){
    int ar[]={2,7,11,15};
    twoSum(ar,9);


}
