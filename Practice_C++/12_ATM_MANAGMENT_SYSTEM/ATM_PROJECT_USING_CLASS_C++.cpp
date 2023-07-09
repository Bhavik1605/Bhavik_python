#include<iostream>
using namespace std;

class welcome{
	public:
		welcome()
		{
			cout<<"********************** WELCOME TO ATM ***********************"<<endl;
			
			cout<<endl<<"\t\t------------------------------"<<endl;
			
			cout<<endl<<"\tCurrent Date & Time : "<<__DATE__<<" : "<<__TIME__<<endl;
			
			cout<<endl<<"\t\t------------------------------"<<endl;
			
			cout<<endl<<"*************************************************************"<<endl;
		}
};

class data{
	protected:
		string name,add,loc;
		int acc;
	public:
		void input()
		{
			fflush(stdin);
			cout<<endl<<"********************** Enter Your Info ***********************"<<endl;
			cout<<endl<<"\tEnter Name of the Account Holder : ";
			getline(cin,name);
			cout<<endl<<"\tEnter Account Holders' Address : ";
			getline(cin,add);
			cout<<endl<<"\tEnter Branch Location : ";
			getline(cin,loc);
			cout<<endl<<"\tEnter Account Number : ";
			cin>>acc;
			cout<<endl<<"**************************************************************"<<endl;
		}
		
		void display()
		{
			cout<<endl<<"\tThe Name of the Account Holder is : "<<name<<endl;
			cout<<endl<<"\tThe Account Holders' Address is: "<<add<<endl;
			cout<<endl<<"\tThe Branch Location is : "<<loc<<endl;
			cout<<endl<<"\tThe Account Number is : "<<acc<<endl;
		}
};

class deposit:public data{
	private:
		int dep;
	protected:
		int bal=20000;
	
	public:
		void DEPOSIT()
		{
			cout<<endl<<"\tPresent Available Balance is : Rs. "<<bal<<endl;
			cout<<endl<<"\tEnter The Amouunt to be Deposited : Rs. ";
			cin>>dep;
			bal +=dep;
			cout<<endl<<"\tYour New Available Balanced Amount is : Rs. "<<bal;
			cout<<endl<<"\t\t\tThank You!"<<endl;	
		}
};
class withdraw:public deposit{
	private:
		int wit;
	public:
		void W_DRAW()
		{
			cout<<endl<<"\tPresent Available Balance is : Rs. "<<bal<<endl;
			cout<<endl<<"\tEnter The Amouunt to be Withdraw : Rs. ";
			cin>>wit;
			if(wit>bal)
			{
				cout<<endl<<"\tInsufficient Available Balance in Your Account."<<endl;
				cout<<endl<<"\t\t\tSorry!!"<<endl;
			}
			else
			{
				bal = bal - wit;
				cout<<endl<<"\tYour New Available Balanced Amount is : Rs. "<<bal;
				cout<<endl<<"\t\t\tThank You!"<<endl;	
			}
		}
};

class balinq:public withdraw{
	public:
		void INQUIRY()
		{
			cout<<endl<<"\tYour Total Available Balanced Amount is : Rs. "<<bal<<endl;
		}
};

int main()
{
	welcome w1;
	
	balinq b1;
	
	int ch;
	
	b1.input();
	
	cout<<endl<<"\tPress 1 and then Press Enter to Access Your Account Via PIN Number"<<endl;
	cout<<endl<<"\t\t\t     or"<<endl;
	cout<<endl<<"\tPress 0 and then Press Enter to Get Help. [Press '0'/'1' ] : ";
	cin>>ch;
	
	switch(ch)
	{
		case 0 :
			cout<<endl<<"********************** ATM ACCOUNT STATUS ***********************"<<endl;
			cout<<endl<<"\tYou Must have the Correct PIN Number to Access This Account.See Your"<<endl;
			cout<<"\tBank Representative for Assistance during Bank Opeening Hours."<<endl;
			cout<<"\t\t\tThanks for, Your Choice Today!!"<<endl;
			cout<<endl<<"*****************************************************************"<<endl;
			break;
		case 1 :
			int pin,ch;
			char choice;
			
			cout<<endl<<"********************** ATM ACCOUNT STATUS ***********************"<<endl;
			
			cout<<endl<<"\tEnter Your Account PIN Access Number [only one attempt] : ";
			cin>>pin;
			
			if(pin==12345)
			{
				do
				{
					cout<<endl<<"********************** ATM Main Menu Screen ***********************"<<endl;
					cout<<endl<<"\tEnter [1] to Deposite Cash"<<endl;
					cout<<"\tEnter [2] to Withdraw Cash"<<endl;
					cout<<"\tEnter [3] to Balance Inquiry"<<endl;
					cout<<"\tEnter [4] to Exit ATM"<<endl;
					
					cout<<endl<<"\tPLEASE ENTER A SELECTION : ";
					cin>>ch;
					
					if(ch==1)
					{
						cout<<endl<<"********************** ATM DEPOSIT SYSTEM ***********************"<<endl;
						b1.display();
						cout<<endl<<"*****************************************************************"<<endl;
						b1.DEPOSIT();
						
					}
					else if(ch==2)
					{
						cout<<endl<<"********************** ATM WITHDRAW SYSTEM **********************"<<endl;
						b1.display();
						cout<<endl<<"*****************************************************************"<<endl;
						b1.W_DRAW();
					}
					else if(ch==3)
					{
						cout<<endl<<"******************* ATM BALANCE_INQUIRY SYSTEM ******************"<<endl;
						b1.display();
						cout<<endl<<"*****************************************************************"<<endl;
						b1.INQUIRY();
					}
					else if(ch==4)
					{
						cout<<endl<<"*****************************************************************"<<endl;
						cout<<endl<<"\tThank You Very Much for Using ATM !!!"<<endl;
						cout<<endl<<"*****************************************************************"<<endl;
						return 0;
					}
					else
					{
						cout<<endl<<"*****************************************************************"<<endl;
						cout<<endl<<"\tEnter Coreect Choice!!!!"<<endl;
						cout<<endl<<"*****************************************************************"<<endl;
					}
					
					cout<<endl<<"\tDo you Want to Go on Main Menu for More Option [Press 'y'/'n'] : ";
					cin>>choice;
				}while(choice=='y' || choice=='Y');
				
				if(choice=='n' || choice=='N')
				{
					cout<<endl<<"*****************************************************************"<<endl;
					cout<<endl<<"\tThank You Very Much for Using ATM !!!"<<endl;
					cout<<endl<<"*****************************************************************"<<endl;
				}
			}
			else
			{
				cout<<endl<<"********************** THANK YOU ***********************"<<endl;
				cout<<endl<<"\tYou had Made Your Attempt Which Failed !!! "<<endl;
				cout<<endl<<"\tNo More Attempts Allowed!! Sorry!!"<<endl;
				cout<<endl<<"********************************************************"<<endl;
			}
			break;
		default :
			cout<<endl<<"\tPress Only 1 and 0 Input"<<endl;
	}
	
	cout<<endl<<"*****************************************************************"<<endl;
	cout<<endl<<"\t\t\tMade By BHAVIK_GOHIL"<<endl;
	cout<<endl<<"*****************************************************************"<<endl;
	return 0;
}
