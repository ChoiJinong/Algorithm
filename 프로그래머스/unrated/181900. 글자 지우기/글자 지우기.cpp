#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for (int i = 0; i < indices.size(); i++)
		my_string[indices[i]] = '0';

	for (int i = 0; i < indices.size(); i++)
		my_string.erase(find(my_string.begin(), my_string.end(), '0'));

	answer = my_string;
    
    return answer;
}