#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(auto c: array)
    {
        string temp = to_string(c);
        
        for(auto cc : temp)
        {
            if(cc == '7')
                ++answer;
        }
    }
    return answer;
}