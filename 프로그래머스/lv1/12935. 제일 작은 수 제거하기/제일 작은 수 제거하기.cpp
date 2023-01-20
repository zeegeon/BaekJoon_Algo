#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int a = 0x0fffffff;
    
    for(auto c: arr)
    {
        if(c < a)
            a = c;
    }
    
    for(auto c: arr)
    {
        if(c != a)
            answer.push_back(c);
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}