#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    auto first= find(arr.begin(), arr.end(), 2);
	auto last = find(arr.rbegin(), arr.rend(), 2).base();

	if (first == arr.end())
		answer = { -1 };
	else
		answer.insert(answer.end(), first, last);
    return answer;
}