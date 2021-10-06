#include <iostream>

using namespace std;

int main()
{
    // 1~500까지의 배열 형성
    int arr[501];
    for (int i = 1; i < 501; i++)
        arr[i] = i;

    int target = 62; // 타겟 값
    // 이분 탐색 수행
    int left = 1, right = 500; // left, right 초기화
    while (left <= right)
    {
        int mid = (left + right) / 2; // mid 갱신
                                      // 타겟 값 찾음
        if (mid == target)
        {
            cout << "Searching Complete!" << '\n';
            break;
        }
        else if (mid > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return 0;
}