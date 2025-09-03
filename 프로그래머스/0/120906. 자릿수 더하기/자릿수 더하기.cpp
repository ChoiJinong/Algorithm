#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string num = to_string(n);
    
    for(int i = 0; i < num.length(); i++){
        if(num[i]>='0' && num[i]<='9'){
            answer += num[i] - '0';
        }
    }
    
    return answer;
}