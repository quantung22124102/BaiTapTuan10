#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
	double x, y;
};
int main()
{
	Point first;
	cout << &first << " " << &first.x << " " << &first.y;
	//dia chi cua first trung voi truong dau tien duoc khai bao trong struct
	return 0;
}
