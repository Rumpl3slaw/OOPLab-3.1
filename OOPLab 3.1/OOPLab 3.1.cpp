#include "Student.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student x;
	cin >> x;
	cout << x;
	cout << endl << endl;
	cout << x.operator string() << endl;

	
}