// static : 정적 <-> 동적
#include <iostream>

using namespace std;

// 0 ~ 1 float RGB
class Color {
public:
	Color() : r(0), g(0), b(0) { }
	Color(float r, float g, float b) : r(r), g(g), b(b) { }

	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

private:
	float r;
	float g;
	float b;
};

Color MixColors(Color a, Color b) {
	// Color res((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	// return res
	return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
}

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = MixColors(blue, red);

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << " , b = " << purple.GetB() << endl;
}