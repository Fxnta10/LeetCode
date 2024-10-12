class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0){
            return 0;

        }
        vector<int>ltr(height.size(),0);
        vector<int>rtl(height.size(),0);
        ltr[0]=height[0];
        for(int i=1;i<height.size();i++){
            ltr[i]=max(ltr[i-1],height[i]);
        }
        cout<<"left to right"<<endl;
        for(auto el:ltr){
            cout<<el<<",";
        }
        rtl[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            rtl[i]=max(rtl[i+1],height[i]);
        }
        cout<<"right to left"<<endl;
        for(auto el:rtl){
            cout<<el<<",";
        }

        int totalWater=0;

        for(int i=0;i<height.size();i++){
            totalWater += min(ltr[i], rtl[i]) - height[i];
        }
        return totalWater;


    }
};