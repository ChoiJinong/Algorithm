#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";

	string str = my_string.substr(s, e-s+1);
	reverse(str.begin(), str.end());

	for (int i = 0; i < str.length(); i++)
		my_string[i+s] = str[i];
    
    answer = my_string;
    
	return answer;
}