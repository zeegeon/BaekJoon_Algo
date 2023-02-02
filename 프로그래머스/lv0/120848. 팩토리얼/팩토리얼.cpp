#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int dp[12] = {};
    
    dp[1] =1;
    for(int i=2; i < 12; ++i)
        dp[i] = i * dp[i-1];
    
    for(int i = 1; i < 12; ++i)
    {
        if(dp[i] > n)
            return i-1;
    }
}