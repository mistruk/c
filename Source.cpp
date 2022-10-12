#include <iostream>
using namespace std;
int main() {
	// For1. Даны целые числа K и N (N > 0). Вывести N раз число K.
	//t  n, k;
	//ut << n;
	//n >> n;
	//ut << "n:";
	//ut << "k:";
	//n >> k;
	//r (int i = 0; i < n; ++i) {
	//out << k << endl;
	//For2. Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
	//ые числа, расположенные между A и B(включая сами числа A и B), а
		//кже количество N эт
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
	//r4. Дано; вещественное число — цена 1 кг конфет. Вывести стоимость 1,
	//For4. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
	// . . ., 10 кг конфет.
	//double price;
	//cout << "input price: ";
	//cin >> price;
	//for (int weight = 1; weight <= 10; weight++) {
	//	cout << weight << weight * price << endl;
	//	n++;
//	}
	//For5?
	//. Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
	//	0.2, . . ., 1 кг конфет
	int n = 0;
	double price;
	cout << "input price: ";
	cin >> price;
	for (double weight = 0.1; weight < 1.0; weight += 0.1) {
		cout << weight <<"$"<< weight * price << endl;
		n++;

	}
	
}
