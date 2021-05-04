#include<iostream>
using namespace std;
struct Point
{
	int x;
	int y;
}
int print(Point A)
{
	cout<<"("<<A.x<<","<<A.y<<")"<<endl;
}
int main()
{
	Point A;
	cin>>A.x>>A.y;
	print(A);
	return 0;
}
