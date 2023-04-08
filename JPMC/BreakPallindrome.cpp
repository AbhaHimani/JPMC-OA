string breakPalindrome(string palindromeStr)
{
    int n = palindromeStr.size();
    if (n == 1)
    {
        return "IMPOSSIBLE";
    }
    int count = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (palindromeStr[i] != 'a')
        {
            count = 1;
            palindromeStr[i] = 'a';
            return palindromeStr;
        }
    }
    if (count == 0)
    {
        return "IMPOSSIBLE";
    }
    palindromeStr[n - 1] = 'b';
    return palindromeStr;
}
