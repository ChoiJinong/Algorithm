#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for (int i = 0; i < num_list.size(); i++) {
		if (i * n < num_list.size())
			answer.push_back(num_list[i * n]);
	}
    return answer;
}