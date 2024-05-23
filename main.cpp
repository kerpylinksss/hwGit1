#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    cout << "Ways to create a map container:\n\n";
    cout << "Standard: \n";
    map<int, string> mp;
    map<int, string> mp1;
    map<int, string>::const_iterator iter;
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";

    for (iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << "Key: " << iter->first << " Value: " << iter->second << endl;
    }

    cout << "\n\nBy an insert() and make_pair() funcs:\n";
    mp1.insert(make_pair(4, "four"));
    mp1.insert(make_pair(5, "five"));
    mp1.insert(make_pair(6, "six"));

    for (iter = mp1.begin(); iter != mp1.end(); iter++)
    {
        cout << "Key: " << iter->first << " Value : " << iter->second << endl;
        mp1.insert(make_pair(10, "ten"));
    }

    return 0;
}