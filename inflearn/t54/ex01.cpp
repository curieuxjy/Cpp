// Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ���� + �Լ�
// Ŭ����(Ÿ��) : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��� �� Ʋ
// ��ü(������Ʈ) : �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����)

#include <iostream>

using namespace std;

// private, protected, public

// class�� private�� �⺻ 
// struct�� public�� �⺻
struct TV {

// ĸ��ȭ(OOP Ư�� �� �ϳ�!)
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
