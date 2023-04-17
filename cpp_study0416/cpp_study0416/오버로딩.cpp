#include<iostream>

//void MyFunc(void) {
//	std::cout << "MyFunc(void) called" << std::endl;
//};
//
//void MyFunc(char c) {
//	std::cout << "MyFunc(char c) called" << std::endl;
//};
//
//void MyFunc(int a, int b) {
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//};

void swap(int num1, int num2) {
	std::cout << num1 << ' ' << num2 << std::endl;
}

void swap(char ch1, char ch2) {
	std::cout << ch1 << ' ' << ch2 << std::endl;
}

void swap(double dbl1, double dbl2) {
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
}

int main() {

	//MyFunc();
	//MyFunc('A');
	//MyFunc(12, 13);

	swap(30, 20);
	swap('Z', 'A');
	swap(1.111, 5.555);

	return 0;
}