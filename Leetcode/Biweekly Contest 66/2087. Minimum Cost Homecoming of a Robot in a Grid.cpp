
class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        
        int cost=0;
        if(startPos[0]<homePos[0])
        {
            for(int i=startPos[0]+1;i<=homePos[0];i++)
            {
                cost+=rowCosts[i];
                
            }
            
        }
        if(startPos[1]<homePos[1])
        {
            for(int i=startPos[1]+1;i<=homePos[1];i++)
            {
                cost+=colCosts[i];
                
            }
            
        }
        if(startPos[0]>homePos[0])
        {
            for(int i=startPos[0]-1;i>=homePos[0];i--)
            {
                cost+=rowCosts[i];
                
            }
            
        }
         if(startPos[1]>homePos[1])
        {
            for(int i=startPos[1]-1;i>=homePos[1];i--)
            {
                cost+=colCosts[i];
                
            }
            
        }
   
        return cost;
    }
};