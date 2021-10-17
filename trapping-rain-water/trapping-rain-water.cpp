class Solution {
public:
    int trap(vector<int>& height) {
        int totalWater = 0;
        int maxL = 0, maxR = 0;
        int lP = 0, rP = height.size() - 1;
        
        while ( lP < rP )
        {
            maxL = max( maxL, height[lP] );
            maxR = max( maxR, height[rP] );
            if ( maxL <= maxR)
            {
                
                
                    totalWater += maxL - height[lP];
                    lP++;
                
            }
            else
            {
                
                
                    totalWater += maxR - height[rP];
                    rP--;
                
            }
            
        }
        
        return totalWater;
            
    
    }
};