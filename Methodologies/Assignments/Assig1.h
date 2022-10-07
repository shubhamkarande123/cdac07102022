#include<cmath>

class Investment
{
	public: 
		Investment()
		{
			amount = 10000;
			period = 4;
		}
 
		Investment(double amount, int period)
		{
			this->amount = amount;
			this->period = period; 
		}
		double GetAmount()
		{
			return amount;
		}
		void SetAmount(double aa)
		{
			amount = aa;
		}
		
		int GetPeriod()
		{
			return period;
		}
		void SetAmount(int pp)
		{
			period = pp;
		}


	double InterestRate()
		{         
			double rate = 0;
			 if(amount<10000)
			{
			 rate = 8;
			}
			 if((amount>=10000) && amount<50000))
			{
			rate = 9;
			}
			if (amount>=50000)
			{
			rate = 10;
			}
			if(period>5)
			{
			 rate+=1;
			}	
			return rate;
		}
		double GetInterest(bool interesttype)
		{
			double interest = 0;
			double amt = 0;
			double rate = Interestrate();
			if (interesttype)
			{
				interest = (amount * period * rate)/100;
			}
			else
			{
				amt = amount * pow(1 + rate / 100),period;
				interest = amt - amount;
			}
			return interest;
		}

	
		~Investment()
		{
		
		}

	private:
		double amount;
		int period;
};





