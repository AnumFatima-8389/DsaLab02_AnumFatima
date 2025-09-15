#include <iostream>
#include <vector>
using namespace std;
void returnIndices(vector<int> v, int key)
{
    vector<int> result;
    if (v.empty())
    {
        cout << "Array is empty\n";
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == key)
            result.push_back(i);
    }
    if (result.empty())
    {
        cout << "Key not found\n";
        return;
    }
    cout << key << " is present at indices:\n";
    for (int i = 0; i < result.size(); i++)
        cout << result.at(i) << " ";
}
int main()
{
    cout << "\t\t-----Task07-----\n";
    vector<int> v = {1,2,2,3,1};
    returnIndices(v, 0);
    return 0;
}