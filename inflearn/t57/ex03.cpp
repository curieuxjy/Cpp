// h m s ÀúÀå
#include <iostream>

using namespace std;

class Time {
public:
	// Time(5);
	// Time(5, 0);
	// Time(2, 37, 54);
	Time() {
		h = 0;
		m = 0;
		s = 0;
	}
	Time(int s_) {
		s = s_;
	}
	Time(int m_, int s_) {
		m = m_;
		s = s_;
	}
	Time(int h_, int m_, int s_) {
		h = h_;
		m = m_;
		s = s_;
	}

private:
	int h;
	int m;
	int s;
};