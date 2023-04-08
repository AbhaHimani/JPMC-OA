string longeven(string s)
{
    int n = s.size();
    string ans = "", curr = "";
    int len = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            curr = curr + s[i];
        }
        else
        {
            int x = curr.size();
            if (x % 2 == 0 && x > len)
            {
                len = x;
                ans = curr;
            }
            curr = "";
        }
    }
    if (ans == "")
        return "00";
    return ans;
}