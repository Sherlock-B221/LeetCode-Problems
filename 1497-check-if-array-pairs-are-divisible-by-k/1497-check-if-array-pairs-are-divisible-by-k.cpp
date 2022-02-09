class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
       multiset <int> ms;
        for(auto i:arr){
            if(ms.count((k-i%k)%k)) ms.erase(ms.lower_bound((k-i%k)%k));
            else ms.insert((i%k+k)%k);
        }
        return ms.size() == 0;
    }
};