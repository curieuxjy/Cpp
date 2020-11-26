// 클래스 = 자료 저장 + 자료 처리 = 변수 + 함수
// 클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀
// 객체(오브젝트) : 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간)

#include <iostream>

using namespace std;

// private, protected, public

// class는 private이 기본 
// struct는 public이 기본
struct TV {

// 캡슐화(OOP 특성 중 하나!)
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV ON" << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV OFF" << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "This channel is changed to " << cnl << "." << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "This volume is changed to " << vol << "." << endl;
		}
	}
};

int main() {
	TV lg;
	// lg.powerOn = true;
	lg.on();
	//lg.channel = 10;
	lg.setChannel(33);
	// lg.volume = 100;
	lg.setVolume(50);
}
