#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int idx = numbers.size();
    
    sort(numbers.begin(), numbers.end());
    answer = numbers[idx-1] * numbers[idx-2];
    
    return answer;
}