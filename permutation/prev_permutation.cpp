#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v(4);
    // 4 3 2 1 >>> 1 2 3 4
    do
    {
        for (int i = 0; i < 4; i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';

    } while (prev_permutation(v.begin(), v.end()));
    return 0;
}