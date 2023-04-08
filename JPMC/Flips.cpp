/*You are given a 0-indexed binary string target of length n. You have another binary string s of length n that is initially set to all zeros. You want to make s equal to target.

In one operation, you can pick an index i where 0 <= i < n and flip all bits in the inclusive range [i, n - 1]. Flip means changing '0' to '1' and '1' to '0'.

Return the minimum number of operations needed to make s equal to target.*/

int minFlips(string target)
{
    char curr = '1';
    int count = 0;
    for (int i = 0; i < target.length(); i++)
    {
        if (target[i] == curr)
        {
            count++;
            curr = (char)(48 + (curr + 1) % 2);
        }
    }
    return count;
}

// Driver Code
int main()
{
    string S = "011000";

    cout << (minFlips(S));
}

// 2nd-

class Solution
{
public:
    int minFlips(string target)
    {
        int n = target.size();
        int flips = 0;
        char status = '0';
        for (int i = 0; i < n; i++)
        {
            if (status != target[i])
            {
                flips++;
                status = status == '0' ? '1' : '0';
            }
        }
        return flips;
    }
};
