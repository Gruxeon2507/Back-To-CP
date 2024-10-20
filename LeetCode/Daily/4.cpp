class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> ans;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        while(i<n1&&j<n2){
            if(nums1[i]>nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }else{
                ans.push_back(nums1[i]);
                i++;
            }
        }
        while(i<n1){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            ans.push_back(nums2[j]);
            j++;
        }
        if((n1+n2)%2!=0){
            return ans[(n1+n2)/2];
        }else{
            return (ans[(n1+n2)/2]+ans[(n1+n2)/2-1])/2;
        }
    }
};