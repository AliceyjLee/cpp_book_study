#include<iostream>  // C++ 입출력 라이브러리
//#include <stdio.h>  // C 입출력 라이브러리



int main() {

	// C++ 입출력 
	/*int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	char str1[100];
	std::cin >> str1;*/

	// C언어 입출력
	/*int a;
	a = 20;
	printf("%d\n", a);
	printf("Hello World");
	char str2[100];
	scanf("%s", str2);*/
	
	// 문제 01 C++ 기반의 데이터 입출력

	/*int num1, num2, num3, num4, num5;
	std::cout << "1번째 정수 입력 : ";
	std::cin >> num1;
	std::cout << "2번째 정수 입력 : ";
	std::cin >> num2;
	std::cout << "3번째 정수 입력 : ";
	std::cin >> num3;
	std::cout << "4번째 정수 입력 : ";
	std::cin >> num4;
	std::cout << "5번째 정수 입력 : ";
	std::cin >> num5;

	std::cout << "합계 :" << num1 + num2 + num3 + num4 + num5 << std::endl;*/

	// 문제02
	
	/*char name, phone;
	std::cout << "이름 : ";
	std::cin >> name;
	std::cout << "전화번호 : ";
	std::cin >> phone;*/

	// 문제03 

	/*int a;

	std::cout << "1~9까지의 숫자 중 아무 숫자나 입력하세요.";
	std::cin >> a;
	std::cout << a << "단 시작! " << std::endl;

	for (int i = 1; i < 10; i++) {
		std::cout << a << "*" << i << "=" << a * i << std::endl;
	}*/
	
	// 문제04

	
	while (1) {
		int total = 0;
		std::cout << "판매 금액을 만원 단위로 입력 (-1 to end) : ";
		std::cin >> total;
		if (total == -1) {
			break;
		}
		std::cout << "이번 다 급여 : " << 50 + total * 0.12 << "만원" << std::endl;
	}
	std::cout << "프로그램을 종료합니다." << std::endl;




	return 0;


}