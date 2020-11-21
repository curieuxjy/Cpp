#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> st;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            st.insert(numbers[i] + numbers[j]);
        }
    }
    answer.assign(st.begin(), st.end());
    return answer;
}

int main() {
    printf(solution("[2, 1, 3, 4, 1]"));
}