
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> missingWords(string s, string t)
{

    vector<string> missing;
    vector<string> first;
    vector<string> second;
    stringstream first_is(s);
    while (first_is >> s)
        first.push_back(s);

    stringstream second_is(t);
    while (second_is >> t)
        second.push_back(t);

    for (int i = 0, j = 0; i < first.size(); i++)
    {
        if (first[i] != second[j])
        {
            missing.push_back(first[i]);
        }
        else
        {
            j++;
        }
    }

    return missing;
}
