#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    string a = to_string(order);
    
    for(auto c : a)
    {
        if(c - '0' == 3 || c - '0' == 6 || c - '0' == 9)
            ++answer;
    }
    
    return answer;
}