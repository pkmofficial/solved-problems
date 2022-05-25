class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        for(int i=0; i<arr.size(); i++)
        {
            int temp = arr[i]; 
            int count = 0; 
            
            if(temp != INT_MIN)
            {
                for(int j=0; j<arr.size(); j++)
                {
                    if(temp == arr[j])
                    {
                        count++;
                        arr[j] = INT_MIN; 
                    }
                }
                if(count>0)
                    ans.push_back(count);
            }
        }
        
        for(int i = 0 ; i<ans.size();  i++){
           int freq = 0;
            for(int j = 0 ; j<ans.size() ; j++){
                if(ans[i]==ans[j]){
                    freq++;
                }
            }
            if(freq>1){
                return false;
            }
        }
        return true;
        // for(int i=0; i<ans.size(); i++)
        // {
        //     int count_fr = 0; 
        //     for(int j=0; j<ans.size(); j++)
        //     {
        //         if(ans[i] == ans[j])
        //             count_fr++;
        //     }
        //     if(count_fr > 1)
        //         return false;
        // }
        // return true; 
        
    }
};