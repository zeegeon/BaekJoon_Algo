#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    if((long long)sqrt(n) * (long long)sqrt(n) != n)
        answer = -1;
    else
        answer = (sqrt(n)+1) *(sqrt(n)+1);
    
    return answer;
}