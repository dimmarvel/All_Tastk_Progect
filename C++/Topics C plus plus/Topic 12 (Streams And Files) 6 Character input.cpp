// ochar.cpp
// ������������ �������� ����� 
#include <fstream>                // ��� �������� �������
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Rus");
	string str = "����� � ������� �������, ��, ���, " "��� ������� ����� ��������.  �������";

	ofstream outfile("TEST.TXT");   // ������� �������� ����
	for (int j = 0; j < str.size(); j++) // ������ ������
		outfile.put(str[j]);        // ���������� � ����
	cout << "���� �������\n";
	return 0;
}