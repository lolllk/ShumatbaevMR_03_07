#include <iostream>;
#include <fstream>;
#include <vector>;
#include <algorithm>;
#include <string>;
using namespace std;

class AutoRepair {
public:
	string mark;
	double price_fix;
	int count_day;
	string number_symbol;

	AutoRepair(string m, double p, int cd, string ns) : mark(m), price_fix(p), count_day(cd), number_symbol(ns) {}

	void print() const {
		cout << "Введите информацию:\n" << "Марка: " << mark <<
			"\n Стоимость ремонта: " << price_fix << "\n Количество дней: "
			<< count_day << "\n Номерной знак: " << number_symbol;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	vector<AutoRepair> list_auto;
	int n;
	cout << "Введите количество записей: ";
	cin >> n;

	for (int i = 0; i < n; ++i) {
		string mark, number_symbol;
		double price_fix;
		int count_day;

		cout << "Введите марку: ";
		cin >> mark;
		cout << "Введите стоимость ремонта: ";
		cin >> price_fix;
		cout << "Введите количество дней: ";
		cin >> count_day;
		cout << "Введите номерной знак: ";
		cin >> number_symbol;

		AutoRepair autoobj(mark, price_fix, count_day, number_symbol);
		list_auto.push_back(autoobj);
		
	}

}
