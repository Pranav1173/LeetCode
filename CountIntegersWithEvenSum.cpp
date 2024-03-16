class Solution {
public:
    int digitSum(int num){
        if(num==0)
            return 0;
        return (num%10 + digitSum(int(num/10)));
    }
    int countEven(int num) {
        int cnt {};
        for(int i = 1; i <=num; i++){
            if(digitSum(i)%2==0)
                cnt++;
        }
        return cnt;
    }
};