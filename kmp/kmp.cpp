#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//실패 지점 찾기
vector<int> Fail(string pattern)
{
    int m = pattern.length();
    vector<int> pi(m); // partial match table

    pi[0] = 0;
    for (int i = 1, j = 0; i < m; i++)
    {
        while (j > 0 && pattern[i] != pattern[j])
            j = pi[j - 1];
        if (pattern[i] == pattern[j])
            pi[i] = ++j;
    }
    return pi;
}

vector<int> KMP(string pattern, string text)
{
    int m = pattern.length();
    int n = text.length();
    vector<int> pos;
    vector<int> pi = Fail(pattern);

    for (int i = 0, j = 0; i < n; i++)
    {
        while (j > 0 && text[i] != pattern[j])
            j = pi[j - 1];
        if (text[i] == pattern[j])
        {
            if (j == m - 1)
            {
                pos.push_back(i - m + 1);
                j = pi[j];
            }
            else
                j++;
        }
    }
    return pos;
}