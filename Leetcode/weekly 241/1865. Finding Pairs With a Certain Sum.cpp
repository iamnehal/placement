class FindSumPairs {
public:
    
    vector<int>a;
    vector<int>b;
    unordered_map<int,int>m;
        unordered_map<int,int>m1;
    
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        
        a=nums1;
        b=nums2;
        
        m.clear();
           m1.clear();
        for(auto x:a)
        {
            m1[x]++;
            
        }
        for(auto x:b)
        {
            m[x]++;
        }
        
        
    }
    
    void add(int index, int val) {
        m[b[index]]--;
        
        b[index]+=val;
        m[b[index]]++;
        return ;
        
    }
    
    int count(int tot) {
        int sum=0;
        for(auto x:m1)
        {
            if(m.find(tot-x.first)!=m.end())
            {
                sum+=( x.second*( m[tot-x.first]   )     );
                
            }
            
            
        }return sum;
        
        
        
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */