#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v(4);
    // 1 2 3 4 >>> 4 3 2 1
    do
    {
        for (int i = 0; i < 4; i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}