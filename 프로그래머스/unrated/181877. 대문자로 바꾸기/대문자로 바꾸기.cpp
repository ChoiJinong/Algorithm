#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(auto i : myString)
        answer += toupper(i);
    return answer;
}