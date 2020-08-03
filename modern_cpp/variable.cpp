#include<iostream> 

int main() 
{ 
    int i1 = 2;
    int i2, i3 = 5;
    float pi = 3.141592;
    double x = -1.5 e6; // -1500000
    double y = -1.5e-6; // -0.0000015
    char c1 = 'a', c2 = 35;
    bool cmp = i1<pi, // ture
         happy = true;


    const int ci1 = 2;
    // const int ci3; // 잘못된 사용
    const float pi = 3.14159;
    const char cc = 'a';
    const bool cmp = ci1<pi;
}