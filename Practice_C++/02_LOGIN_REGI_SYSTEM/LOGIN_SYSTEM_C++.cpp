#include<iostream>
#include<vector>
using namespace std;

class User{
	private:
		string username,password;
	public:
		User(string name,string pass)
		{
			username=name;
			password=pass;
		}
		string getname()
		{
			return username;
		}
		string getpass()
		{
			return password;
		}
};

class Register{
	private:
		string name,pass;
	protected:
		vector<User> users; //create object of vector	
	public:
		void Reg_data()
		{
			fflush(stdin);
			
			cout<<endl<<"Enter Your Username : ";
			getline(cin,name);
			cout<<endl<<"Enter Your Password : ";
			getline(cin,pass);
			
			User o1(name,pass);//Call Constructor
			users.push_back(o1);//Given data store in vector data for given class
			
			cout<<endl<<"Your Registration Successfully Done....."<<endl;
		}
};

class Login:public Register{
	private:
		string nameL,passL;
	public:
		void Log_data()
		{
			fflush(stdin);
			
			cout<<endl<<"Enter Your Username : ";
			getline(cin,nameL);
			cout<<endl<<"Enter Your Password : ";
			getline(cin,passL);
			for(int i=0;i<users.size();i++)
			{
				if(users[i].getname() == nameL && users[i].getpass() == passL)
				{
					cout<<endl<<"Login Successfully..."<<endl;
				}
				else
				{
					cout<<endl<<"Invalid Username or Password..."<<endl;
				}
			}
		}
		
		void Show_data()
		{
			for (int i=0;i<users.size();i++)
			{
				cout<<endl<<"["<<i+1<<"] Username : "<<users[i].getname()<<endl;	
			}
		}
		
		void Search_data()
		{
			string nameS;
			
			cout<<endl<<"Search Name : ";
			cin>>nameS;
			for(int i=0;i<users.size();i++)
			{
				if(users[i].getname() == nameS)
				{
					cout<<endl<<"User Found in System...."<<endl;
				}
				else
				{
					cout<<endl<<"User Not Found in System...."<<endl;
				}
			}
		}
};


int main()
{
	int ch;
	char choice;
	
	Login l1;
	
	do
	{
		system("cls");
		cout<<endl<<"--------- Menu for User -----------"<<endl;
		cout<<endl<<"Enter [1] for Register User"<<endl;
		cout<<"Enter [2] for Login User"<<endl;
		cout<<"Enter [3] for Show User List"<<endl;
		cout<<"Enter [4] for Search User"<<endl;
		cout<<"Enter [5] for Exit"<<endl;
		
		cout<<endl<<"Enter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<endl<<"---------------Registration_System------------------"<<endl;
				l1.Reg_data();
				cout<<endl<<"----------------------------------------------------"<<endl;
				break;
			case 2:
				cout<<endl<<"-------------------Login_System---------------------"<<endl;
				l1.Log_data();
				cout<<endl<<"----------------------------------------------------"<<endl;
				break;
			case 3:
				cout<<endl<<"--------------------User_List-----------------------"<<endl;
				l1.Show_data();
				cout<<endl<<"----------------------------------------------------"<<endl;
				break;
			case 4:
				cout<<endl<<"------------------Search_System---------------------"<<endl;
				l1.Search_data();
				cout<<endl<<"----------------------------------------------------"<<endl;
				break;
			case 5:
				cout<<endl<<"----------------------------------------------------"<<endl;
				cout<<endl<<"Thank you !!!";
				cout<<endl<<"----------------------------------------------------"<<endl;
				return 1;
				break;
			default :
				cout<<endl<<"Invalid_Input";
				break;	
		}
		
		cout<<endl<<"Do You Want to Continue [Press : 'y'/'n'] : ";
		cin>>choice;
		
	}while(choice == 'y' || choice == 'Y');
	if(choice=='n' || choice=='N')
	{
		cout<<endl<<"---------------------------------------------------"<<endl;
		cout<<endl<<"Thank you Very Much for Using This System...."<<endl;
		cout<<endl<<"---------------------------------------------------"<<endl;
		cout<<endl<<"Made By Bhavik_Gohil"<<endl;
		cout<<endl<<"---------------------------------------------------"<<endl;
	}
	return 0;
}
