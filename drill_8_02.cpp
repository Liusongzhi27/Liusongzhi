#include "stb_lib_facilities.h"

void swap_v(int a ,int b)
{
	int temp; temp=a; a=b; b=temp;


	cout << a << '\t' << b << endl;

	retun;
}


void swap_r(int&a,int&b)
{
	int temp; temp=a; a=b; b=temp;

	cout << a << '\t' << b << endl;

	return;
}

void swap_cr(const int& a, const int& b)

{
	int temp; temp=a; a=b; b=temp;

	cout << a << '\t' << b << endl;

	return;
}

int mian()
{
	int x = 7;
	int y = 9;

	swap_v(x,y); 
	swap_v(7,9);

	swap_r(x,y);
	swap_r(7,9);



const int cx = 7;
const inc cy = 9;

swap_v (cx,cy);
swap_v (7.7,9.9);

swap_r (cx,cy);
swap_r (7.7,9.9);


double dx = 7.7;
double dy = 9.9;

swap_v (dx,dy);
swap_v (7.7,9.9);

swap_r (dx,dy);
swap_r (7.7 , 9.9);

return 0;
}