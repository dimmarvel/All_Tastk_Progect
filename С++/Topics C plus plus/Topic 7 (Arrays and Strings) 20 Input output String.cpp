// sstrio.cpp
// ����/����� ��� ������ string
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	string full_name, nickname, address;
	string greeting("������������, ");

	cout << "������� ���� ���: ";
	getline(cin, full_name);
	cout << "���� ���: " << full_name << endl;

	cout << "������� ��� ���������: ";
	cin >> nickname;

	greeting += nickname;
	cout << greeting << endl;

	cout << "������� ��� ����� � ��������� �����\n";
	cout << "��������� ����� ������ '$'\n";
	getline(cin, address, '$');
	cout << "��� �����: " << address << endl;
	system("pause");
	return 0;
}


