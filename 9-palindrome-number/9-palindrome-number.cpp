class Solution {
public:
    bool isPalindrome(int x) 
    {
        int Reminder;
        double Reverse=0;
        int temp=x;
        while(x>0)
        {
            Reminder=x%10;
            Reverse=Reverse*10 +Reminder;
            x=x/10;
        }
        
        if(Reverse==temp)
            return true;
        else
            return false;
    
}
};