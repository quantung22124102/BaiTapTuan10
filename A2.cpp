#include<iostream>
using namespace std;
struct Point
{
	int a,b;
};
void truyenthamtri(point A)
{
	cout<<&A<<endl;
}
void truyenthambien(point &A)
{
	cout<<&A;
}
int main()
{
	point A;
	cout<<&A<<endl;
	truyenthamtri(A);
	truyenthambien(A);
	return 0;
}

