// ����� ������, ������������ ����� ���������
#include <iostream>
using namespace std;

int main()
{
	void dispstr(char*); // �������� �������
	char str[] = "� ������������ ������ ���� ��������� �����.";

	dispstr(str);

	return 0;
}

void dispstr(char* ps)
{
	while (*ps)               // ���� �� �������� ����� ������
		cout << *ps++;        // ����� ����������� �������� �� �� �����
	cout << endl;
}


