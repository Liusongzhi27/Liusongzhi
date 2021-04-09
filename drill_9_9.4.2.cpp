#include <std_lib_facilties.h>

struct  Date
{
	int y,m,d;
    Date(int y, int m, int d);
    void add_day(int n);
};

Date::Date (int yy ,int mm ,int dd)
{
	int ymin(0), ymax(2200);
	if (yy<0 || y >2200)
		cout << "invalid year. ";
	if (mm<1 || mm >12)
		cout << "invalid month. ";
	if (dd<1 || dd>31)
		cout << "invalid day."
	else 
	{
		y =yy; m=mm; d=dd;
	}

void Date::add_day(int n )
  	{
  		d +=n;
  		if (d>31)
  			d = 1;
  			++m;

  	}

ostream& operator<<(ostream& os, const Date& d)
{
	return os <<'('<< d.y <<','<<d.m << ','<< d.d<< ')';

}

int main()
{
	Date today(1978,6,25)
	Date tomorrow = today;
	tomorrow.add_day(1)

	cout << today << endl ;
	cout << tomorrow << endl ;

}
return 0;


}