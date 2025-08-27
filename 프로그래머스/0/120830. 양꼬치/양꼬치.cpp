#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int service = n / 10;
    answer = n * 12000 + 2000 * (k - (n/10));
    
    return answer;
}