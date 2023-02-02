#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    
    int a[27] = {};
    
    for(auto c: before)
        a[c-'a']++;
    
    for(auto c: after)
        if(a[c-'a'] == 0)
            return 0;
        else
            --a[c-'a'];
    
    return 1;
}