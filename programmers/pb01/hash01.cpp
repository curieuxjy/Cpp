// 해시/위장
// https://programmers.co.kr/learn/courses/30/lessons/42578
// vector: https://blockdmask.tistory.com/70

#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main(vector<vector<string>> clothes) {
	int answer = 1;
	map<string, int>index;
	set<string> key;

	for_each(clothes.begin(), clothes.end(), [&](vector<string> v) {
		if (index.find(v[1]) == index.end()) {
			index.insert(pair<string, int>(v[1], 1));
			key.insert(v[1]);

		}
		else
			index[v[1]]++;
		});

	for_each(key.begin(), key.end(), [&](string n) {
		answer *= (index[n] + 1);

		});

	return answer - 1;
}