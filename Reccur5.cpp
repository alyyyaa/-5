//Рекурсивный алгоритм определения минимальной цифры целого числа N;
#include <iostream>
#include <ctime>
using namespace std;
void minDigit(int n, int *min)
{
	int digit = n % 10;
	if (digit < *min)
		*min = digit;
	if (n / 10 == 0) 
		return;
	minDigit(n / 10, min);
}
void main()
{
	srand(time(NULL));
	int number = rand() % 1000;
	int min = 9;
	minDigit(number, &min);
	cout << number << " min=" << min << endl;
}
	