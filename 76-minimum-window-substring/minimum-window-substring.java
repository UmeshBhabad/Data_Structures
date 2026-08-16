class Solution
{
    public String minWindow(String s, String t)
    {
        int n = s.length();
        int m = t.length();

        Map<Character, Integer> tMap = new HashMap<>();
        Map<Character, Integer> sMap = new HashMap<>();

        for(char c : t.toCharArray())
        {
            tMap.put(c, tMap.getOrDefault(c, 0) + 1);
        }

        String res = "";

        int l = 0, r = 0;

        int count = m;
        int minLength = Integer.MAX_VALUE;

        for(r = 0; r < n; r++)
        {
            char ch = s.charAt(r);

            sMap.put(ch, sMap.getOrDefault(ch, 0) + 1);

            if(tMap.containsKey(ch) && sMap.get(ch) <= tMap.get(ch))
            {
                count--;
            }

            while(count == 0)
            {
                if(r - l + 1 < minLength)
                {
                    minLength = r - l + 1;
                    res = s.substring(l , r + 1);
                }

                char leftCh = s.charAt(l);
                sMap.put(leftCh, sMap.get(leftCh) - 1);

                if(tMap.containsKey(leftCh) && sMap.get(leftCh) < tMap.get(leftCh))
                {
                    count++;
                }
                l++;
            }
        }
        return res;
    }
}