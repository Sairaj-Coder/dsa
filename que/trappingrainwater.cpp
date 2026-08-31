class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax[1000000]={0};
        int rightmax[1000000]={0};

        leftmax[0]=0;
        

        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1], height[i-1]);
        

        }
     
        rightmax[n-1]=0;
        for(int i=n-2;i>=0;i--){
            rightmax[i] = max(rightmax[i+1], height[i+1]);
          
            
        }
      
        int mini=0;
        
        
        for(int i=0;i<n;i++){
            if(min(leftmax[i],rightmax[i])-height[i]>0){
                mini+=min(leftmax[i],rightmax[i])-height[i];
            }
        
            
        }
      
       
    cout<<"new3"; 
    return mini;

        
    }
};