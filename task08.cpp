#include <iostream>
using namespace std;
int firstOccurrence(string s, string substring)
{
    if (s.empty())
        return -2;
    int pos = s.find(substring);
    if (pos != string::npos)
        return pos;
    return -1;
}
int main()
{
    string text, search;
    cout << "Enter the main text: ";
    cin >> text;
    cout << "Enter the string to be searched: ";
    cin >> search;
    int a = firstOccurrence(text, search);
    if (firstOccurrence(text, search) >= 0)
        cout << "firstOccurrence: " << firstOccurrence(text, search);
    else if (a == -1)
        cout << "pattern not found";
    else
        cout << "Empty pattern entered.";

    return 0;
}