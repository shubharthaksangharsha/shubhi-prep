#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input(vector<int> &nums)
{
    for (auto &i : nums)
    {
        cin >> i;
    }
}
void display(vector<int> nums)
{
    for (auto const i : nums)
    {
        cout << i << ' ';
    }
    cout << endl;
}
bool containsDuplicate(vector<int> &nums)
{   
    //Aproach 1 : O(n log n)
    if (nums.size() == 1 || nums.size() == 0) //corner case
    {
        return false;
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    input(nums);
    //display(nums);
    cout << containsDuplicate(nums) << endl;
    return 0;
}