#include<iostream>
using namespace std;
struct Point
{
	int a;
	int b;
};
void mid_point(point A,point B)
{
	point C;
	C.x=(A.a+B.a)/2;
	C.y=(A.b+B.b)/2;
	cout<<"trung diem :"<<"("<<C.x<<","C.y")";
}
int main()
{
	point A;
	point B;
	point C;
	cout<<"nhap vao A va B: "<<endl;
	cin>>A.x>>A.y>>B.x>>B.y;
	mid_point(A,B);
	return 0;
}
