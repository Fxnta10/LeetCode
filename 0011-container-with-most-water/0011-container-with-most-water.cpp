class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximumArea=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int tempArea= min(height[left],height[right])*(right-left);
            maximumArea=max(maximumArea,tempArea);
            
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maximumArea;
    }
};