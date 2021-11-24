#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Create(int* a, const int n, int Low, int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(a, n, Low, High, i + 1);
}
void Print(int* a, const int n, int i)
{
	cout << setw(4) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
	cout << endl;
}
int Kil(int* a, const int n, int i)
{
	if (i < n)
		return a[i] + Kil(a, n, i + 1);
	else
		return 0;

}
int dil(int* a, const int n, int i) 
{
	if (i < n)
		return 2 + dil(a, n, i + 1);
	else
		return 0;
	
}


int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int S, m;
	int Low = 15;
	int High = 85;

	Create(a, n, Low, High, 0);
	S = Kil(a, n, 0);
	m = dil(a, n, 0);
	Print(a, n, 0);
	cout << "arithmetic mean = " << 1. * S / m << endl;
	//cout << " Середнє значення" << m << endl;
}