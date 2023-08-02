#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    // n = 1 : num_list의 0번 인덱스부터 b번 인덱스까지
	if (n == 1) {
		for (int i = 0; i <= slicer[1]; i++)
			answer.push_back(num_list[i]);
	}
	// n = 2 : num_list의 a번 인덱스부터 마지막 인덱스까지
	else if (n == 2) {
		for (int i = slicer[0]; i < num_list.size(); i++)
			answer.push_back(num_list[i]);
	}
	// n = 3 : num_list의 a번 인덱스부터 b번 인덱스까지
	else if (n == 3) {
		for (int i = slicer[0]; i <= slicer[1]; i++)
			answer.push_back(num_list[i]);
	}
	// n = 4 : num_list의 a번 인덱스부터 b번 인덱스까지 c 간격으로
	else if (n == 4) {
		vector<int> vec;
		for (int i = slicer[0]; i <= slicer[1]; i++) {
			vec.push_back(num_list[i]);
		}
		for (int j = 0; j < vec.size(); j++) {
			if ((j + slicer[2]) % slicer[2] == 0) {
				answer.push_back(vec[j]);
			}
		}
	}
    return answer;
}