// oline.cpp
// �������� ����� ����� � ���������
#include <fstream>              // ��� ��������
								// ��������� �����/������
using namespace std;

int main()
{
	ofstream outfile("TEST.TXT"); // ������� �������� ���� 
								  // ��������� ����� � ����
	outfile << "�������� ����. � ������� �����.\n";
	outfile << "� ������������ �������� ������� \n";
	outfile << "���������� �������� ������ \n";
	outfile << "� �������� �������������� ������.\n";
	return 0;
}


