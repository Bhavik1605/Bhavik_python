#include<iostream>
using namespace std;

class Patient{
	private:
		string name,gender;
		int age;
	public:
		void patient_data()
		{
			cout<<"-----------------------"<<endl;
			cout<<"Enter Patient Details"<<endl;
			cout<<"-----------------------"<<endl;
			
			fflush(stdin);
			
			cout<<endl<<"Enter Patient Name : ";
			getline(cin,name);
	
			cout<<"Enter Patient Gender : ";
			getline(cin,gender);
			
			cout<<"Enter Patient Age : ";
			cin>>age;
		}
		void display_patient()
		{
			cout<<endl<<"-----------------------"<<endl;
			cout<<"Display Patient Details"<<endl;
			cout<<"-----------------------"<<endl;
			
			cout<<endl<<"Patient Name is : "<<name<<endl;
			cout<<endl<<"Patient Age is : "<<age<<endl;
			cout<<endl<<"Patient Gender is : "<<gender<<endl;
		}
};

class IPD{
	protected:
		int wardNo,bedNo,chargeDay;
	public:
		void ipd_data()
		{
			cout<<endl<<"-----------------------"<<endl;
			cout<<"Enter IPD Details"<<endl;
			cout<<"-----------------------"<<endl;
			
			fflush(stdin);
			
			cout<<endl<<"Enter Ward Number : ";
			cin>>wardNo;
	
			cout<<"Enter Bed Number : ";
			cin>>bedNo;
			
			cout<<"Enter Charge Per Day : ";
			cin>>chargeDay;
		}
		
		void display_ipd()
		{
			cout<<endl<<"-----------------------"<<endl;
			cout<<"Display IPD Details"<<endl;
			cout<<"-----------------------"<<endl;
			
			cout<<endl<<"Patient Ward Number is : "<<wardNo<<endl;
			cout<<endl<<"Patient Bed Number is : "<<bedNo<<endl;
			cout<<endl<<"Patient Charge Per Day is : "<<chargeDay<<endl;
		}
		
};

class IPDpatient:public Patient,public IPD{
	private:
		int admittedDays;
	public:
		void details()
		{
			patient_data();
			ipd_data();
			cout<<endl<<"Enter Number of Days Admitted : ";
			cin>>admittedDays;
		}
		void dispaly()
		{
			display_patient();
			display_ipd();
			cout<<endl<<"-----------------------------------------------"<<endl;
			cout<<endl<<"Total Number of Days Admitted for Patient is : "<<admittedDays<<endl;
			cout<<endl<<"Total Bill of Patient is : "<<admittedDays*chargeDay<<" Rs.";
		}
};
int main()
{
	int n;
	IPDpatient I[20];
	
	cout<<"Enter No. of Patient Details You Want  :  ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
    	I[i].details();
    	I[i].dispaly();
	}
	
	return 0;
}
