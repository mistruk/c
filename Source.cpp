#include <iostream>
using namespace std;
int main() {
	// For1. ���� ����� ����� K � N (N > 0). ������� N ��� ����� K.
	//t  n, k;
	//ut << n;
	//n >> n;
	//ut << "n:";
	//ut << "k:";
	//n >> k;
	//r (int i = 0; i < n; ++i) {
	//out << k << endl;
	//For2. ���� ��� ����� ����� A � B (A < B). ������� � ������� ����������� ���
	//�� �����, ������������� ����� A � B(������� ���� ����� A � B), �
		//��� ���������� N ��
	int a, b;
	//t n = 0;
	//ut << "a: ";
	//n >> a;
	//ut << "b: ";
	//n >> b;
	//r (int i = a; i <= b; i = i + 1) {
	//out << i << "";
//n++;
//
	//ut << "qty = " << n << endl;
	//r4. ����; ������������ ����� � ���� 1 �� ������. ������� ��������� 1,
	//For4. ���� ������������ ����� � ���� 1 �� ������. ������� ��������� 1,
	// . . ., 10 �� ������.
	//double price;
	//cout << "input price: ";
	//cin >> price;
	//for (int weight = 1; weight <= 10; weight++) {
	//	cout << weight << weight * price << endl;
	//	n++;
//	}
	//For5?
	//. ���� ������������ ����� � ���� 1 �� ������.������� ��������� 0.1,
	//	0.2, . . ., 1 �� ������
	int n = 0;
	double price;
	cout << "input price: ";
	cin >> price;
	for (double weight = 0.1; weight < 1.0; weight += 0.1) {
		cout << weight <<"$"<< weight * price << endl;
		n++;

	}
	
}
