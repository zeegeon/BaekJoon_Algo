#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    
    for(auto& c: my_string)
    {
        if(c >= 'A' && c <= 'Z')
            c += 32;
        else
            c -= 32;
    }
    
    return my_string;
}