#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Dobrodošli", "na", "rasPETLJAvanje", "!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}