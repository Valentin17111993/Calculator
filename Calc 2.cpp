#include <iostream>
using namespace std;

float priv, a1;
int sum, prod, dif, a, b, or1, and1, oror1;
char c;

int main ()
{
	setlocale(LC_ALL, "");
	cout << "Введите первое число" << endl;
	cin >> a;
	cout << "Операция" << endl;
	cin >> c;
	cout << "Введите второе число" << endl;
	cin >> b;
	a1 = a;
	switch (c)
	{
	 case '+':
	 {
		 sum = a + b;
		 cout << a << "+" << b << " = " << sum << endl;
		 break;
	 }
	 case '-':
	 {
		 dif = a - b;
		 cout << a << "-" << b << " = " << dif << endl;
		 break;
	 }
	 case '*':
	 {
		 prod = a * b;
		 cout << a << "*" << b << " = " << prod << endl;
		 break;
	 }
	 case '/':
	 {
		 if (b == 0)
		 {
			 cout << a << "/ 0 не определено " << endl;
		 }
		 else
		 {
			 priv = a1 / b;
			 cout << a << "/" << b << " = " << priv << endl;
		 }
		 break;
	 }
	 case '|':
	 {
		 or1 = a | b;
		 cout << a << " | " << b << " = " << or1 << endl;
		 break;
	 }
	 case '&':
	 {
		 and1 = a & b;
		 cout << a << " & " << b << " = " << and1 << endl;
		 break;
	 }
	 case '^^':
	 {
		 oror1 = a ^ b;
		 cout << a << " ^^ " << b << " = " << oror1 << endl;
		 break;
	 }
	 case '^':
	 {
		 int i = 1;
		 int st = 1;
		 while (i <= b)
		 {
			 st *= a;
			 i++;
		 }
		 cout << a << "^" << b << " = " << st << endl;
		 break;
	 }
	 case '!':
	 {
		 int fact1 = 1;
		 int fact2 = 1;
		 for (int i = 1; i <= a; i++)
		 {
			 fact1 *= i;
		 }
		 cout << a << "! = " << fact1 << endl;
		 for (int i = 1; i <= b; i++)
		 {
			 fact2 *= i;
		 }
		 cout << b << "! = " << fact2 << endl;
		 break;
	 }
	 default :
		 cout << "Операция не определена" << endl;
		 break;
	}

	return 0;
}	