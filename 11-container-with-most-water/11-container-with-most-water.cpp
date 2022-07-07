class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int mx=INT_MIN;
        while(i<=j)
        {
             if(height[i]<height[j]){
                int p=height[i]*(j-i);
                mx=max(mx,p);
                i++;
            } else if(height[i]==height[j]){
                int t=height[i]*(j-i);
                mx=max(mx,t);
                i++;
                j--;
            } else{
                int q=height[j]*(j-i);
                mx=max(mx,q);
                j--;
            }
        }
        return mx;
    }
};