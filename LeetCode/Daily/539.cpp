class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes(timePoints.size());
        for(int i=0;i<timePoints.size();i++){
            string time = timePoints[i];
            int h = stoi(time.substr(0,2));
            int m = stoi(time.substr(3));
            minutes[i]=h*60+m;
        }
        sort(minutes.begin(),minutes.end());
        int ans = 10000;
        for(int i=1;i<minutes.size();i++){
            if(minutes[i]-minutes[i-1]<ans) ans=minutes[i]-minutes[i-1];
        }
        return min(ans,24*60-minutes[minutes.size()-1]+minutes[0]);
    }
};