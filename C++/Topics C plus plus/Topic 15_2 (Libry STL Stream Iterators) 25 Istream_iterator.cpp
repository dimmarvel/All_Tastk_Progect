// initer.cpp
// ������������ istream_iterator
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	list<float> fList(5);               // �������������������� ������

	cout << "\n������� 5 ����� (���� float): ";
	// ��������� istream
	istream_iterator<float> cin_iter(cin);   // cin
	istream_iterator<float> end_of_stream;   //eos (����� ������) ���������� �� cin � fList
	copy(cin_iter, end_of_stream, fList.begin());
	cout << endl;                  // ������� fList
	ostream_iterator<float> ositer(cout, "--");
	copy(fList.begin(), fList.end(), ositer);
	cout << endl;
	return 0;
}