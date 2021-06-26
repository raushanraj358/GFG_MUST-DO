class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int a[], int n)
    {
       stack < pair<int,int>>s;
       vector<int>v;
       
       for( int i = 0; i < n;i++){
           if(s.empty()){
               v.push_back(-1);
           }
           else if(!s.empty() && s.top().first > a[i]){
               v.push_back(s.top().second);
           }
           else if(!s.empty() && s.top().first <= a[i]){
               while(!s.empty() && s.top().first <= a[i]){
                   s.pop();
               }
               if(s.empty()){
                   v.push_back(-1);
               }
               else{
                   v.push_back(s.top().second);
               }
           }
           s.push({a[i],i});
       }
       for(int i = 0; i < v.size();i++){
           v[i] = i - v[i];
       }
       return v;
    }
};
