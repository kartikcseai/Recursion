// duplicates
#include<iostream>
#include<vector>
using namespace std;
void printsubsets(vector<int>& arr, vector<int>& ans, int i){
    if(i==arr.size()){
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //include
    ans.push_back(arr[i]);
    printsubsets(arr, ans, i+1);
    //exclude
    ans.pop_back(); // backtrack
    int idx=i+1;
    while(idx<arr.size()&&arr[idx]==arr[idx-1]) idx++;
    printsubsets(arr, ans, idx);
}
int main(){
    vector<int> arr={1,2,2};
    vector<int> ans;
    printsubsets(arr, ans, 0);
    return 0;
}