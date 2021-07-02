#include<bits/stdc++.h>
using namespace std;
void Nearly_Sorted(int a[],int n, int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        pq.push(a[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
       
    }
     while(pq.size()>0){
            ans.push_back(pq.top());
            pq.pop();
        }
   for(auto ele : ans){
       cout << ele << " ";
 }
   cout << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        Nearly_Sorted(a,n,k);
    }
}
