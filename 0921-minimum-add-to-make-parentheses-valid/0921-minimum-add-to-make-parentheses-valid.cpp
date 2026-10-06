class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int cnt=0;
        int cnt1=0;
        for(char c:s){
            if(c=='('){
                cnt++;
            }
            
            else{
                if(cnt>0){
                    cnt--;
                }
                else{
                    cnt1++;
                }
            }

        }
    return cnt+cnt1;
    }
};