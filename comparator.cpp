#include <iostream>
#include <string>

using namespace std;
// The function changed the defination of normal function
bool internalComparator(pair<int, int> el1, pair<int, int> el2)
{

    if (el1.second < el2.second)
        return false;
    if (el1.second > el2.second)
        return true;
    if (el1.first < el2.first)
        return true;
    return false;
}

void explainComparator()
{
    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    sort(arr, arr + 5, internalComparator);
    for (int i = 0; i < 5; i++)
    {
        cout << "{" << arr[i].first << "," << arr[i].second << "}";
    }
}

int main()
{

    explainComparator();

    return 0;
}