class Solution {
public:
    int reverse(int x) {
        int res=0,digit=0;
        
        while(x!=0){
          digit=x%10;
          if((res<INT_MIN/10)||(res>INT_MAX/10))
        return 0;
          res=(res*10)+digit;
            x=x/10;
        }
        return res;
        
    }
};
