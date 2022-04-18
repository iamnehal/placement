class Solution {
public:
    int minSwaps(string s) {
        int count0=0;
        int count=0;
          int n=s.length();
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')count0++;
            else count1++;
        }
      
        
        if(n%2==0 && ( count1!=count0  ))return -1;
        if(n%2==1 && (abs(count1-count0)!=1))return -1;
        
        
        
        if(n%2==1)
        {
            if(count0>count1)
            {
             
                for(int i=0;i<n;i++)
                {
                    if(i%2==0)
                    {
                        if(s[i]=='1')count++;
                        
                    }
                    else
                    {
                        if(s[i]=='0')count++;
                    }
                    
                }
                
                
            }
            else
                 {
             
                for(int i=0;i<n;i++)
                {
                    if(i%2==0)
                    {
                        if(s[i]=='0')count++;
                        
                    }
                    else
                    {
                        if(s[i]=='1')count++;
                    }
                    
                }
                
                
            }
            
            
        }
        else
        { count1=0;count=0;
             for(int i=0;i<n;i++)
                {
                    if(i%2==0)
                    {
                        if(s[i]=='0')count++;
                        
                    }
                    else
                    {
                        if(s[i]=='1')count++;
                    }
                    
                }
             for(int i=0;i<n;i++)
                {
                    if(i%2==0)
                    {
                        if(s[i]=='1')count1++;
                        
                    }
                    else
                    {
                        if(s[i]=='0')count1++;
                    }
                    
                }
                
            
            return min(count,count1)/2;
            
        }
        return count/2;
        
    }
};