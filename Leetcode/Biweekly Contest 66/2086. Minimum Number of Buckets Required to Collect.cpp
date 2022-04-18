class Solution {
public:
    int minimumBuckets(string s) {
        int n=s.size();
        if(n==1)
        {
            if(s[0]=='.')return 0;
            else return -1;
            
            
        }
        int count=0;
        int currb=-1;
        for(int i=0;i<n;i++)
        {
            cout<<count<<i<<endl;
            //general case
            if(s[i]=='.')continue;
            
            else
            {
                if(i==0)
                {
                    if(s[i+1]=='H')return -1;
                    else
                    {
                        count++;
                        currb=1;
                        cout<<"i==0"<<endl;
                    }
                    
                    
                }
                else if(i==n-1)
                {
                    if(s[i-1]=='H')return -1;
                    else
                    { if(currb==n-2)continue;
                     else
                     {
                         
                     
                        count++;
                        currb=n-2;
                          cout<<"i==n-1"<<endl;
                    }
                    }
                    
                }
                
                
                
                else
                {
                    if(currb==i-1)continue;
                    else if(s[i+1]=='H'&& s[i-1]=='H' )return -1;
                    else if( s[i-1]=='.' && s[i+1]=='H')
                    {
                        
                        currb=i-1;count++;
                          cout<<"i==. and H"<<endl;
                    }
                    else
                    {
                        count++;
                        currb=i+1;
                          cout<<"i== other casede"<<endl;
                    }
                    
                    
                }
                
                
            }
            
            
        }
        return count;
        
    }
};