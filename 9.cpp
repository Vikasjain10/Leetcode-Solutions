
class Solution {
public:
    bool isPalindrome(int x) {
        if((x<0)&&(x>9999999))
        return false;
       long int num=0;
       int y=x;
        while(x>0){
            num=num*10;
            num=num+(x%10);
            x=x/10;

        }
        if(num==y)
        return true;
        else
        return false;
        
    }
};
