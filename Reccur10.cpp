//Рекурсивная функция для вычисления суммы: S = 1 + 1.2 + 1.4 + 1.6 + ..., содержащая N первых членов (N < 30, S - вещественное).
#include <iostream>
using namespace std;
double Summ(int n, double *s) {
	static double sum = *s;
	if (n > 1) {
		
		*s += 0.2;
		sum += *s;
		Summ(n - 1, s);
	}
	return sum;
}
int main() {
	double s = 1.;
	cout << Summ(5, &s);
}