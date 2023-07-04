#include<iostream>
using namespace std;

class input{
	private:
		string name;
		
	public:
		input()
		{
			fflush(stdin);
			
			cout<<"---------Tops Tech.Fast Food----------"<<endl;
			
			cout<<"Please Enter your Name : ";
			getline(cin,name);
			
			cout<<"Hello "<<name<<endl;
		
		}
		
		void menu()
		{
			cout<<endl<<"--------------Menu--------------"<<endl;
			cout<<"1) Pizzas"<<endl;
			cout<<"2) Burgers"<<endl;
			cout<<"3) Sandwitch"<<endl;
			cout<<"4) Rolls"<<endl;
			cout<<"5) Biryani"<<endl;
		}
};

class pizza{
	protected:
		int qua,price,choice,total;
	
	public:
		void pi()
		{
			cout<<endl<<"[1]. Margherita Pizza.       Rs.150";
			cout<<endl<<"[2]. Veggie Pizza.           Rs.170";
			cout<<endl<<"[3]. Cheese Pizza.           Rs.200";
			
			cout<<endl<<"\nPlease Enter which Pizza You would Like to have ? : ";
			cin>>choice;
							
			if(choice==1)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 150*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Margherita Pizza.";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==2)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 170*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Veggie Pizza.";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==3)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 200*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Cheese Pizza.";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else
			{
				cout<<endl<<"Invalid_Choice!!!";
			}
		}
};

class burger:public pizza{
	public:
		void bu()
		{
			cout<<endl<<"[1]. Vegetable Burger         Rs.60";
			cout<<endl<<"[2]. Healthy Burger           Rs.80";
			cout<<endl<<"[3]. Chinese Burger           Rs.100";
			
			cout<<endl<<"\nPlease Enter which Burger You would Like to have ? : ";
			cin>>choice;
							
			if(choice==1)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 60*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Vegetable Burger.";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==2)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 80*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Healthy Burger.";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==3)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 100*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Chinese Burger.";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else
			{
				cout<<endl<<"Invalid_Choice!!!";
			}
		}
	
};

class sandwitch:public burger{
	public:
		void sa()
		{
			cout<<endl<<"[1]. Club Sandwitch            Rs.240";
			cout<<endl<<"[2]. Veg. Crispy Sandwitch     Rs.160";
			cout<<endl<<"[3]. Extream Veg. Sandwitch    Rs.100";
			
			cout<<endl<<"\nPlease Enter which Sandwitch You would Like to have ? : ";
			cin>>choice;
							
			if(choice==1)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 240*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Club Sandwitch";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==2)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 160*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Veg. Crispy Sandwitch";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==3)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 100*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Extream Veg. Sandwitch";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else
			{
				cout<<endl<<"Invalid_Choice!!!";
			}
		}
	
};

class rolls:public sandwitch{
	public:
		void ro()
		{
			cout<<endl<<"[1]. Quick Corn Rolls               Rs.90";
			cout<<endl<<"[2]. Spicy Potato and Roti Roll     Rs.170";
			cout<<endl<<"[3]. Cheesy Paneer Bread Roll       Rs.200";
			
			cout<<endl<<"\nPlease Enter which Roll You would Like to have ? : ";
			cin>>choice;
							
			if(choice==1)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 90*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Quick Corn Rolls";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==2)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 170*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Spicy Potato and Roti Roll";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else if(choice==3)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 200*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Cheesy Paneer Bread Roll";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else
			{
				cout<<endl<<"Invalid_Choice!!!";
			}
		}
	
};


class biryani:public rolls{
	public:
		void bi()
		{
			cout<<endl<<"[1]. Bombay Biryani                  Rs.150";
			cout<<endl<<"[2]. Hyderabadi Hut Biryani          Rs.200";
			cout<<endl<<"[3]. Daawat-E-Khaas Veg. Biryani     Rs.350";
			
			cout<<endl<<"\nPlease Enter which Roll You would Like to have ? : ";
			cin>>choice;
							
			if(choice==1)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 150*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Bombay Biryani";
				cout<<endl<<"Your Total Bill is : "<<total;
			}
			else if(choice==2)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 200*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Hyderabadi Hut Biryani";
				cout<<endl<<"Your Total Bill is : "<<total;
			}
			else if(choice==3)
			{
				cout<<endl<<"Please Enter Quantity : ";
				cin>>qua;	
				price = 350*qua;
				total = total+price;
				cout<<endl<<"\n----------Your Order-----------"<<endl;
				cout<<endl<<"Daawat-E-Khaas Veg. Biryani";
				cout<<endl<<"Your Total Bill is : "<<total;
				cout<<endl<<"\nYour Order Will be Delivered in 40 Minutes"<<endl;
				cout<<endl<<"Thank You for Ordering from Tops Tech Fast Food";
			}
			else
			{
				cout<<endl<<"Invalid_Choice!!!";
			}
		}
	
};



int main()
{
	int choice;
	char ch;
	
	input i1;
	
	do
	{
		i1.menu();
		
		biryani b1;
		
		cout<<endl<<"\nPlease Enter Your Choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				b1.pi();
				break;
				
			case 2:
				b1.bu();
				break;
			case 3:
				b1.sa();
				break;
			
			case 4:
				b1.ro();
				break;
				
			case 5:
				b1.bi();
				break;
			
			default :
				cout<<"Please Enter Correct Choice....";		
		}
		

		cout<<endl<<"\nWould You Like to Order Anything else ? [Y / N] : ";
		cin>>ch;
		
		cout<<"\n"<<endl;
		
	}while(ch=='Y' || ch=='y');
	if(ch=='N' || ch=='n')
	{
		cout<<"Enjoy Your Meal....";
	}
	else
	{
		cout<<endl<<"Please Enter Valid Input!!!";
	}
	return 0;
}
