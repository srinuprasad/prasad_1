#include <iostream>
using namespace std;

class date
{
  private:
		int day;
		int month;
		int year;

	public:
		void set(int DayIn, int MonthIn, int YearIn);
		void show();
						
};
inline void date::set(int DayIn, int MonthIn, int YearIn)
{
	day=DayIn;
	month=MonthIn;
	year=YearIn;
}
inline void date::show()
{
	cout << day <<"-" << month << "-" << year << endl;
}
int main()
{
	date d1,d2,d3;
	d1.set(22,12,2012);
	d1.show();
	d1.set(23,12,2012);
	d1.show();
	return 0;
}
