// statfunc.cpp
// ����������� ������� � ID ��������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class gamma
{
private:
	static int total;       //����� �������� ������
							//(������ ����������)
	int id;                 //ID �������� �������
public:
	gamma()                 //����������� ��� ����������
	{
		total++;              //�������� ������
		id = total;           //id ����� �������� �������� total
	}
	~gamma()                //����������
	{
		total--;
		cout << "Deleted ID " << id << endl;
	}
	static void showtotal() // ����������� �������
	{
		cout << "ALL: " << total << endl;
	}
	void showid()           // ������������� �������
	{
		cout << "ID: " << id << endl;
	}
};
//---------------------------------------------------------
int gamma::total = 0;       // ����������� total
///////////////////////////////////////////////////////////
int main()
{
	gamma g1;
	gamma::showtotal();

	gamma g2, g3;
	gamma::showtotal();

	g1.showid();
	g2.showid();
	g3.showid();
	cout << "----------����� ���������----------\n";
	system("pause");
	return 0;
}


