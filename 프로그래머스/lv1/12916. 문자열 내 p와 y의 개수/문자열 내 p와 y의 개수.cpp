#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = false;
    int a=0,b=0;
    
    for(auto c: s)
    {
        if(c == 'p' || c == 'P')
            ++a;
        else if(c == 'y' || c == 'Y')
            ++b;
    }
    
    if(a == b)
        answer = true;

    return answer;
}