#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
   unordered_set<string> subs;
    
    for (string s : phone_book)
    {
        for (int i=1; i<s.length(); i++)
        {
            subs.insert(s.substr(0,i));
        }
    }
    
    for (string s : phone_book)
    {
        if (subs.find(s) != subs.end())
        {
            return false;
        }
    }
    
    return true;
}