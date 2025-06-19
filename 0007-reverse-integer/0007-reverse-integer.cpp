class Solution {
public:
    int reverse(int x) {
        int rem=0;
        while(x!=0){
        //  error
if(x>0 &&rem>(pow(2,31)-1)/10){
return 0;
}
   if(x<0 && rem<pow(-2,31)/10){
                return 0;
                }
            rem=rem*10+x%10;
            x=x/10;
        }
           
        
return rem;

    }
};