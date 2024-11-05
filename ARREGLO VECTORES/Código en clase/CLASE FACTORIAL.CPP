#include <iostream>
using namespace std;
int suma1 = 0;
int suma(int num)
{
	if (num == 1)
	{
		cout << "condicion mas simple : " << num << ", suma1 : " << suma1 + 1 << endl;
		return 1;
	}
	else
	{
		suma1 = num + suma(num - 1);
		cout << "retornando llamada de : " << num << ", suma1 : " << suma1 << endl;
	}
	return suma1;
}
int main()
{
	cout << "resultado en main() " << suma(5) << endl;
}
