

#include <bits/stdc++.h>
using namespace std;

int repeated_digit(int n)
{
    unordered_set<int> s;

    while (n != 0)
    {
        int d = n % 10;

        if (s.find(d) != s.end())
        {

            return 0;
        }
        s.insert(d);
        n = n / 10;
    }

    return 1;
}

int calculate(int L, int R)
{
    int answer = 0;

    for (int i = L; i < R + 1; ++i)
    {

        answer = answer + repeated_digit(i);
    }

    return answer;
}

int main()
{
    int L = 80, R = 120;

    cout << calculate(L, R);
    return 0;
}
