#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int a[26] = {};
    
    for(int i=0; i< s.size(); ++i)
    {
        a[s[i] - 'a']++;
    }
    
    for(int i=0; i<26; ++i)
    {
        if(a[i] == 1)
            answer.push_back(i + 'a');
    }
    
    return answer;
}