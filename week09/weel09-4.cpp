class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0;
        for(int b: bills){
            if(b==5) b5++;
            else if(b==10){
                if(b5==0) return false;
                b5--;
                b10++;
            } else {
                if(b10>0&&b5>0){
                    b20++;
                    b10--;
                    b5--;
                } else if(b5>=3){
                    b20++;
                    b5-=3;
                } else return false;
            }
        }
        return true;
    }
    
};