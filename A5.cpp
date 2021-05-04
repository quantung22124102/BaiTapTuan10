#include<iostream>
using namespace std;
struct point
{
	int a,b;
};
void truyenthamtri(point A)
{
	cout<<&A<<endl;
}
void truyenthamchieu(point &A)
{
	cout<<&A;
}
int main()
{
	point A;
	cout<<&A<<endl;
	truyenthamtri(A);
	truyenthamchieu(A);
	return 0;
}
