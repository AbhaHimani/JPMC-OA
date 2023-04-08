class Solution
{
public
    String findWinner(String s)
    {
        int wendy_moves = 0, bob_moves = 0;
        int n = s.length();
        while (i < n)
        {
            int j = i, c = 0;
            while (j < n && s.charAt(i) == s.charAt(j))
            {
                c++;
                j++;
            }
            if (c > 2)
            {
                if (s.charAt(i) == 'w')
                    wendy_moves += c - 2;
                else
                    bob_moves += c - 2;
            }
            i = j;
        }
        if (bob_moves >= wendy_moves)
            return "bob";
        else
            return "wendy";
    }
};

In Python :
def findWinner(s):
w=0
b=0
for i in range(len(s)-2):
if s[i:i+3]=='www':
w+=1
if s[i:i+3]=='bbb':
b=b+1
if w>b:
return('wendy')
else:
return('bob')



in python:


int i;
int countw = 0, countb = 0;
int countw1 = 0, countb1 = 0;
i = 0;
char f = s[0];
while (i < s.length())
{
    while (f == 'w')
    {
        countw++;
        if (s[i + 1] != 'w')
        {
            f = 'b';
        }
        i++;
    }
    while (f == 'b')
    {
        countb++;
        if (s[i + 1] != 'b')
        {
            f = 'w';
        }
        i++;
    }
    if (countw > 2)
    {
        countw1 = countw1 + (countw - 2);
        countw = 0;
    }
    if (countb > 2)
    {
        countb1 = countb1 + (countb - 2);
        countb = 0;
    }
    countw = 0;
    countb = 0;
}

if (countb1 >= countw1)
{
    return "bob";
}
else
{
    return "wendy";
}
}