#include "std_lib_facilities.h"

const vector<string> months {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month
{ 
    jan,feb,mar,apr,may,jun,july,aug,sept,oct,nov,dec 
};

Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}

class Date {

private:
    int y; 
    Month m;
    int d;

public:
Date(): y(1978), m(Month::jun), d(25) {}
Date(int yy, Month mm, int dd): y(yy), m(mm), d(dd)
{

 if (m < 1 || m > 12)
     cout << "Error, invalid month." << endl;
 else if (d < 1 || d > 31)
     cout << "Error, invalid day." << endl;

 return;
}
int day() const { return d; }
Month month() const { return m; }
int year() const{ return y; } 

void add_day(int n)
    {
    	d+=n;
	    if (d > 31)
	    {
	    	++m;
	    	d-=31;
	    	if (m == Month::jan)
	    	{
	    		++y;
	    	}
    	}
    }

void add_month(int n)
    {
        m = Month(int(m) + n);
        if (int(m)>12)
        {
            ++y;
            m = Month(int(m)-12);
        }
    }

void add_year(int n)
    {
        y += n;
    }
};

ostream &operator << (ostream &os, const Date &date)
{
    return os  << '(' << date.year() << ',' << date.month() << ',' << date.day() << ')';
}

int main()
{
    Date today(1978, Month::jun, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << today << endl << tomorrow << endl;
    return 0;
}