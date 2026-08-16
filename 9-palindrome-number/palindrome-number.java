class Solution
{
    public boolean isPalindrome(int x)
    {
        int digit = 0;

        int No = x;

        if(No < 0)
        {
            No = -No;
        }

        int rev = 0;

        while(No != 0)
        {
            digit = No % 10;
            rev = rev * 10 + digit;
            No /= 10;
        }

        return rev == x;
    }
}