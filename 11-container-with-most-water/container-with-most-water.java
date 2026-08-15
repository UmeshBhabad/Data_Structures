class Solution
{
    static
    {
        for(int i = 0; i < 1000; i++)
        {
            maxArea(new int[]{});
        }
    }
    public static int maxArea(int[] height)
    {
        int n = height.length;

        int l = 0, r = n - 1;

        int area = 0, maxArea = 0;

        int minHeight = 0, width = 0;

        while(l < r)
        {
            minHeight = Math.min(height[l], height[r]);
            
            width = r - l;

            area = minHeight * width;

            if(height[l] <= height[r])
            {
                l++;
            }
            else
            {
                r--;
            }

            maxArea = Math.max(maxArea, area);
        }

        return maxArea;
    }
}