// strconv.cpp
// ������� ������� ����� � ����� String
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string.h>          // ��� ������� str*
///////////////////////////////////////////////////////////
class String
{
private:
	enum { SZ = 80 };       // ������ �������
	char str[SZ];         // ������ ��� �������� ������
public:
	// ����������� ��� ����������
	String()
	{
		str[0] = '\x0';
	}
	// ����������� � ����� ����������
	String(const char s[])
	{
		strcpy(str, s);
	} // ��������� ������ � �������
// ����� ������
	void display() const
	{
		cout << str;
	}
	// ������� ������ � �������� ����
	operator char* ()
	{
		return str;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	String s1;                 // ���������� ����������� ��� ����������

	char xstr[] = "���, ��������! "; // ������� ������� ������

	s1 = xstr;                 // ������ ���������� ����������� � ����� ����������

	s1.display();            // ���������� ������

	String s2 = "�� �������!"; // ����� ���������� ����������� � ����������
	s2.display();
	cout << static_cast<char*>(s2); // ���������� �������� �������� ����
	cout << endl;
	system("pause");
	return 0;
}


