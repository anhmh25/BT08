#include<iostream>
using namespace std;

void f(int xval)
{
	int x;
	x = xval;
	cout << &x << endl;
}
void g(int yval)
{
	int y;
	y = yval;
	cout << &y <<endl;
}
int main()
{
	f(7);
	g(11);
	return 0;
}

// địa chỉ của x và y giống nhau do trùng vị trí stack trong hàm main 