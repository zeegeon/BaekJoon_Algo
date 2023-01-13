#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for(auto c: my_string)
    {
        if(isdigit(c) != 0)
            answer.push_back(c-48);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}