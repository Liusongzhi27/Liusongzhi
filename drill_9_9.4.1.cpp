#include <std_lib_facilites.h>

struct Date 
{
	int y ;
	int m ;
	int d ;
};

void init_day(Date&dd,int y,int m,int d,)
{
	int ymin(0),ymax(2200);
	if (y>ymax || y< ymin )
		cout << "invalid year ";
	if (m>12 || m<1)
		cout << "invalid mouth ";
	if (d>31 || d< 1)
		cout << "invalid day " ;

	else
	{
	
		dd.y = y;
  		dd.m = m;
  		dd.d = d;

	}

}

void add_day(Date&dd,int n)
{
	dd.d += n;

}

ostream & operator <<(ostream &os, const Date &date )
{
	return os <<'('<< d.y <<','<<d.m << ','<< d.d<< ')';

}

int main()
{
	Date today(1978,6,25);
	Date tomorrow( today );

	add_day(tomorrow,1);

	cout << today<<'\n'<< tomorrow << '\n';

return 0;

}
