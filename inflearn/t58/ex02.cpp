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

	// private field까지 접근 가능
	static Color MixColors(Color a, Color b) {
		// return Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);

	}

private:
	float r;
	float g;
	float b;
};

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);
	// static
	Color purple = Color::MixColors(blue, red);
	//             blue.MixColors(blue, red) 도 가능

	cout << "r = " << purple.GetR() << ", g = " << purple.GetG() << " , b = " << purple.GetB() << endl;
}