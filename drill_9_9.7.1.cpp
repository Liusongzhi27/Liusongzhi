#include "std_lib_facilities.h"
class Year{ //year in [min:max]range
	static const int min = 1800;
    static const int max = 2200;

public:
	class Invaild{};
	Year(int x) : y{x} { if (x<min || max<=x) throw("Invalid year"); 
	int year() { return y; }
private:
	int y
};

ostream& operator<<(ostream& os, Year y)
{
	return os << year();
}


const vector<string> months
{
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

enum class Month {
	jan, feb, mar, apr, may, jun, july, aug, sept, oct, nov, dec
};
Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}

class Date
{
private:
	int y; 
	Month m;
	int d;
public:
	Date(): y{1978}, m{Month::jun}, d{25} {}

	Date(int yy, Month mm, int dd): y{yy}, m{mm}, d{dd}

	{
		if(!is_valid()) throw Invalid{};
	}
	void set_year(int yy){ if(yy<0) error("Invalid year"); y = yy; }
	void set_month(Month mm){ m = mm; }
	void set_day(int dd){ d = dd; }

	int get_year() { return y; }
	Month get_month() { return m; }
	int get_day() { return d; }

}
void add_day()
	{
		++d;
		if (d > 31)
		{
			d = 1;
			++m;
		} if (m == Month::jan)
		{
			++y;
		}
	}
};
ostream& operator<< (ostream& os, Date d)
{
	return os << d.get_year() << ". " 
		<< d.get_month() << " "
		<< d.get_day();
}

int mian()
{
	Date today(1978, Month::jun, 25);
	Date tomorrow = today ;
	tomorrow.add_day(1);
	cout << today << endl << tomorrow << endl ;
	return 0;
}