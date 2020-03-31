// englaray.cpp
// ������� ��� ���������� ���
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////

class Distance
{
private:
	int feet;
	float inches;
public:
	void getdist() // ��������� ����������
	{
		cout << "\n  ������� ����: "; cin >> feet;
		cout << "  ������� �����: "; cin >> inches;
	}
	void showdist() const // ����� ����������
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	Distance dist[100]; // ������ ����������
	int n = 0;             // ������� ������
	char ans;              // ����� ������������ (�/�)

	cout << endl;

	do
	{
		cout << "������� ����� ����� " << n + 1;
		dist[n++].getdist();      // �������� � ��������� �����
		cout << "���������� ���� (�/�)?: ";
		cin >> ans;
	} while (ans != '�');            // ����������, ���� �� ����� ������� '�'

	// ���������� ��� ���������
	for (int j = 0; j < n; j++)
	{
		cout << "\n����� ����� " << j + 1 << " : ";
		dist[j].showdist();
	}

	cout << endl;
	system("pause");
	return 0;
}

