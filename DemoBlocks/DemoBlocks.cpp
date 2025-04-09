#include <iostream>
#include "Declarations.h"

using namespace std;
int main()
{
	int num1 = 92;
	int num2 = 34;

	cout << "Num1 = " << num1 << endl;
	cout << "Num2 = " << num2 << endl;


	swap(&num1, &num2);

	cout << "Num 1 = " << num1 << endl;
	cout << "Num 2 = " << num2;

}

int swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}