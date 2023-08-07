#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum = 0;

	for (int i = 0; i < num_list.size(); i++) {
		if (i % 2 != 0)
			answer += num_list[i];
		else
			sum += num_list[i];
	}

	if (answer > sum)
		return answer;
	else
		return sum;
}