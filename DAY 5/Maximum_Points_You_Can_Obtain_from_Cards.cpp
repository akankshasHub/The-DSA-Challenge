/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/ */

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int i=0,j=0,sum=0,totalsum=0,result=0;
        for(auto i : cardPoints)
        totalsum=totalsum+i;
        if(k==n)
        return totalsum;
         while(j<n)
        {   
            sum+=cardPoints[j];
            if(j-i+1<n-k)
            {
                j++;
            }
            else{
                result=max(result,totalsum-sum);
                sum-=cardPoints[i];
                i++;
                j++;
            }
            
        }

        return result;
    }
};