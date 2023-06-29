class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map1;
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            map1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            auto it=map1.find(nums2[i]);
            if(it!=map1.end() && it->second>0){
             res.push_back(nums2[i]);
                it->second= -1;
            }
        }
        return res;
    }
};