// 2 decision on C++.cpp 

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> charCount;

    for (char c : s)
    {
        charCount[c]++;
    }

    char mostFrequentChar = '\0';
    int mostFrequentCount = 0;

    for (const auto& pair : charCount)
    {
        if (pair.second > mostFrequentChar)
        {
            mostFrequentChar = pair.first;
            mostFrequentCount = pair.second;
        }
    }

    cout << "Most frequent character: " << mostFrequentChar << endl;
    cout << "Count: " << mostFrequentCount << endl;

    return 0;
}


