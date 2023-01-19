#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    
    string answer = "김서방은 ";
    
    int cnt = 0;
    
    for(int i=0; i< seoul.size(); ++i)
        if(seoul[i] != "Kim")
            ++cnt;
        else if(seoul[i] == "Kim")
            break;
    
    answer += to_string(cnt);
    answer += "에 있다";
    
    return answer;
}