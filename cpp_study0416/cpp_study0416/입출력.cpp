#include<iostream>  // C++ ����� ���̺귯��
//#include <stdio.h>  // C ����� ���̺귯��



int main() {

	// C++ ����� 
	/*int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	char str1[100];
	std::cin >> str1;*/

	// C��� �����
	/*int a;
	a = 20;
	printf("%d\n", a);
	printf("Hello World");
	char str2[100];
	scanf("%s", str2);*/
	
	// ���� 01 C++ ����� ������ �����

	/*int num1, num2, num3, num4, num5;
	std::cout << "1��° ���� �Է� : ";
	std::cin >> num1;
	std::cout << "2��° ���� �Է� : ";
	std::cin >> num2;
	std::cout << "3��° ���� �Է� : ";
	std::cin >> num3;
	std::cout << "4��° ���� �Է� : ";
	std::cin >> num4;
	std::cout << "5��° ���� �Է� : ";
	std::cin >> num5;

	std::cout << "�հ� :" << num1 + num2 + num3 + num4 + num5 << std::endl;*/

	// ����02
	
	/*char name, phone;
	std::cout << "�̸� : ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ : ";
	std::cin >> phone;*/

	// ����03 

	/*int a;

	std::cout << "1~9������ ���� �� �ƹ� ���ڳ� �Է��ϼ���.";
	std::cin >> a;
	std::cout << a << "�� ����! " << std::endl;

	for (int i = 1; i < 10; i++) {
		std::cout << a << "*" << i << "=" << a * i << std::endl;
	}*/
	
	// ����04

	
	while (1) {
		int total = 0;
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end) : ";
		std::cin >> total;
		if (total == -1) {
			break;
		}
		std::cout << "�̹� �� �޿� : " << 50 + total * 0.12 << "����" << std::endl;
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;




	return 0;


}