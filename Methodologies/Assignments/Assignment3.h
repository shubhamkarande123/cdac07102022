#include<string>
#include<iostream>
class Patient
{
	private: 
		int patientID;
		std::string patientName; 
	 	int bedType;
		int noOfDays;

	public:
		Patient()
		{
			patientID = 1;
			patientName = "Default";
			bedType = 1;
			noOfDays = 2;
		}
	       Patient(int patientID, std::string patientName, int bedType, int noOfDays) 
	       {
	       		this-> patientID = patientID;
			this-> patientName = patientName;
	       		this-> bedType = bedType;
	     		this-> noOfDays = noOfDays;
	       }
	      virtual double GetBillAmount()
	       {	
			double amount=0;	
		        double price;
	      		if (bedType == 1)
				price = 500;
			if(bedType == 2)
				price = 350;
			if(bedType == 3)
				price = 200;	
			/*switch(bedType)
			{
				case 1:
					price = 500;
					break;
					
				case 2:
					price = 350;
					break;
			
				case 3:
					price = 200;
					break;
				default:
					price = 150;
				
			}*/
			return noOfDays * price;
		}
	       int GetPatientID()
	       {
		       return patientID;
	       }
	       void SetPatientID (int ID)
	       {
		      patientID = ID;
	       }
	       std::string GetPatientName()
	       {
		       return patientName;
	       }
	       void SetPatientName (std::string name)
	       {
		       patientName = name;
	       }
    	       int GetBedType()
	       {
		       return bedType;
	       }
	       void SetBedType (int bed)
	       {
		     bedType = bed;
	       }
	       int GetNoOfDays()
	       {
		       return noOfDays;
	       }
	       void SetNoOfDays (int days)
	       {
		       noOfDays = days;
	       }
};
	class InHousePatient : public Patient 
{
	        private:
			float discount;		       
		public:
			InHousePatient() : Patient()
			{
				discount = 0;
			}
			
	      InHousePatient(int patientID, std::string patientName, int bedType, int noOfDays, float discount) :  
	       Patient(patientID, patientName, bedType, noOfDays) 
			{
				this->discount = discount;
			}
		double GetBillAmount()
		{
			double amount = 0;
			amount = Patient :: GetBillAmount();
			if(amount>=5000)
				return amount * 0.95;
			else
				return amount * (1 - discount);
		}	

			
};
