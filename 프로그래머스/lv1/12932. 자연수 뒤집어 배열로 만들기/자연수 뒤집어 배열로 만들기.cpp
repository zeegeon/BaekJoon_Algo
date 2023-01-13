#include <string>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    string temp = to_string(n);
    reverse(temp.begin(), temp.end());
    
    for(auto c: temp)
    {
        answer.push_back(c-48);
    }
    
    return answer;
}