using namespace std;
class date {
	int d, m, y;
	static date CurrentDate;
public:
	date(int d = 0, int m = 0, int y = 0)
	{
		this->d = d;
		this->m = m;
		this->y = y;
	}
	static date getCurrentDate()
	{
		return CurrentDate;
	}
	void setDate(int day, int month, int year)
	{
		d = day;
		m = month;
		y = year;
	}
	static void SetCurrentDate(int d, int m, int y)
	{
		CurrentDate.setDate(d, m, y);
	}
	static bool CompareDayAndMonth(const date& obj)
	{
		if (CurrentDate.d == obj.d && CurrentDate.m == obj.m)
			return true;
		return false;
	}
	friend ostream& operator <<(ostream& out, const date& obj)
	{
		out << "(" << obj.d << "/" << obj.m << "/" << obj.y << ")";
		return out;
	}
	bool operator ==(const date& obj)
	{
		if (d == obj.d && m == obj.m && y == obj.y)
			return true;
		else
			return false;
	}
	int operator -(const date& obj)
	{
		return (y - obj.y);
	}
	date* operator --()
	{
		date* newDate = NULL;
		if (d > 1)
		{
			newDate = new date((d - 1), m, y);
		}
		else if (d == 1)
		{
			if (m > 1)
			{
				if (m == 5 || m == 7 || m == 10 || m == 12)
					newDate = new date(30, m - 1, y);
				else if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 12)
					newDate = new date(31, m - 1, y);
				else if (m == 3)
				{
					if (y % 4 == 0)
						newDate = new date(29, m - 1, y);
					else
						newDate = new date(28, m - 1, y);
				}
			}
			else if (m == 1)
			{
				newDate = new date(31, 12, y - 1);
			}
		}
		return newDate;
	}
};
//date date::CurrentDate(17, 11, 2022);