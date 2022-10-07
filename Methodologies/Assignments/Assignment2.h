#include <cstdio>
class Money
{
public:
	Money(int r, int p)
	{
	   rupees = r + p/100;
	   paise = p % 100;
	   #ifdef TESTING
	   puts("Money instance initialized");
	   #endif
	}
	void print() const
	{
	  printf("%d.%02dRs\n",rupees,paise);
	}
	Money operator+(const Money& rhs)const
	{
	 return Money(rupees + rhs.rupees, paise + rhs.paise);
	}
	Money operator-(const Money& rhs)const
	{
	 return Money(rupees - rhs.rupees, paise - rhs.paise);
	}
	~Money()
	{
	  #ifdef TESTING
	  puts("Money instance finalized");
          #endif
	}
private:
	int rupees;
	int paise;
};
