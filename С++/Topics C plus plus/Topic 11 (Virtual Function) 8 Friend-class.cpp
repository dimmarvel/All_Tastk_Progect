// friclass.cpp
// ������������� ������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class alpha
{
private:
	int data1;
public:
	alpha() : data1(99) {  }  //�����������
	friend class beta;        //beta � ������������� �����
};
///////////////////////////////////////////////////////////
class beta
{                         //��� ������ ����� ������
public:                   //� ������� ������ alpha
	void func1(alpha a) { cout << "\ndata1=" << a.data1; }
	void func2(alpha a) { cout << "\ndata1=" << a.data1; }
};
///////////////////////////////////////////////////////////
int main()
{
	alpha a;
	beta b;

	b.func1(a);
	b.func2(a);
	cout << endl;
	return 0;
}