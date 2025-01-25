/*write a c++ program in which create a class to represent Student that 
will store name, gender, age, class, section and roll. accept 10 students 
details and print all on screen*/
#include<iostream>
#include<process.h>
#define SZ 2
using namespace std;
class Student
{
	private:
		char name[50],gender[5],clas[8],sec[3];
		int roll;
		int age;
	public:
			//Create a constructor
			Student(char *n="No Name",char *cl="N/A", char *g="N/A",char *sec="N/A",int rl=0, int age=0)
			{
				strcpy(name,n);
				strcpy(clas,cl);
				strcpy(gender,g);
				strcpy(this->sec,sec);
				roll=rl;
				this->age=age;
			}
			void setDetails(int c)
			{
				cout<<"Enter Student's Details: "<<c;
				cout<<"\nEnter name:";
				cin>>name;
				fflush(stdin);
				cout<<"Enter Class:";
				cin>>clas;
				printf("Enter Roll No.:");
				cin>>roll;
				printf("Enter Gender:");
				cin>>gender;
				printf("Enter Section:");
				cin>>sec;
				printf("Enter Student age:");
				cin>>age;
			}
			void SetName(char *name)
			{
				strcpy(this->name,name);
			}
			void setClass(char *clas)
			{
				strcpy(this->clas,clas);
			}
			void setRoll(int roll)
			{
				this->roll=roll;
			}
			void setGender(char *gender)
			{
				strcpy(this->gender,gender);
			}
			void setSec(char *sec)
			{
				strcpy(this->sec,sec);
			}
			void setAge(int age)
			{
				this->age=age;
			}
			char *getName()
			{
				return name;
			}
			char *getClass()
			{
				return clas;
			}
			int getRoll()
			{
				return roll;	
			}
			char *getGender()
			{
				return gender;
			}
			int getAge()
			{
				return age;
			}
			char *getSec()
			{
				return sec;
			}
			void show()
			{
				cout<<endl<<"Name: "<<name<<" Class: "<<clas<<" Gender: "<<gender<<" Sec: "<<sec
				<<" Roll: "<<roll<<" Age: "<<age;
			}		
};
class Player
{
	private:
		char name[50];
		char gender[5];
		int age;
		char gameName[40];
	public:
		Player(char *name="No Name", char *gender="N/A", int age=0, char *gameName="N/A")
		{
			strcpy(this->name,name);
			strcpy(this->gender,gender);
			this->age=age;
			strcpy(this->gameName,gameName);
		}
		void setDetails(int c)
		{
			cout<<endl<<"Enter Player Details: "<<c;
			cout<<"\nEnter Player's Name:";
			cin>>name;
			cout<<"Enter Gender: ";
			fflush(stdin);
			cin>>gender;
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter Game Name: ";
			cin>>gameName;
		}
		void setName(char *name)
		{
			strcpy(this->name,name);
		}
		void setGender(char *gender)
		{
			strcpy(this->gender,gender);
		}
		void setAge(int age)
		{
			this->age=age;
		}
		void setGameName(char *game)
		{
			strcpy(gameName,game);
		}
		char *getName()
		{
			return name;
		}
		char *getGender()
		{
			return gender;
		}
		int getAge()
		{
			return age;
		}
		char *getGameName()
		{
			return gameName;
		}
		void show()
		{
			cout<<endl<<"Name "<<name<<" Gender: "<<gender<<" Age: "<<age<<" Game Name: "
			<<gameName;
		}	
};
class Employee
{
	private:
		char name[50];
		char gender[5];
		int age;
		char disignation[50];
		int salary;
	public:
		//Create a constructor
		Employee(char *name="No Name", char *gender="N/A", int age=0, char *disignation="N/A",int salary=0)
		{
			strcpy(this->name,name);
			strcpy(this->gender,gender);
			this->age=age;
			strcpy(this->disignation,disignation);
			this->salary=salary;
		}	
		void setDetails(int c)
		{
			cout<<endl<<"Enter Employee Details : "<<c;
			cout<<"\nEnter Employee name:";
			fflush(stdin);
			cin>>name;
			cout<<"Enter Employee gender:";
			fflush(stdin);
			cin>>gender;
			cout<<"Enter age:";
			cin>>age;
			cout<<"Enter disignation:";
			cin>>disignation;
			cout<<"Enter Salary:";
			cin>>salary;
		}
		void setName(char *name)
		{
			strcpy(this->name,name);
		}
		void setGender(char *gender)
		{
			strcpy(this->gender,gender);
		}
		void setAge(int age)
		{
			this->age=age;
		}
		void setDisignation(char *digination)
		{
			strcpy(this->disignation,digination);
		}
		void setSalary(int salary)
		{
			this->salary=salary;
		}
		char *getName()
		{
			return name;
		}
		char *getGender()
		{
			return gender;
		}
		int getAge()
		{
			return age;
		}
		char *getDigination()
		{
			return disignation;;
		}
		int getSalary()
		{
			return salary;
		}
		void show()
		{
			cout<<"Name: "<<name<<" Gender: "<<gender<<" Age: "<<age<<
			" Disignation: "<<disignation<<" Salary: "<<salary;		
		}
};
class Artist
{
	private:
		char name[50];
		char gender[5];
		char artName[30];
		int age;
	public:
		//Create a constructor
		Artist(char *name="No Name", char *gender="N/A", int age=0, char *artName="N/A")
		{
			strcpy(this->name,name);
			strcpy(this->gender,gender);
			strcpy(this->artName,artName);
			this->age=age;
		}
		//Accept input From user
		void setDetails(int c)
		{
			cout<<endl<<"Enter Artist Details: "<<c;
			cout<<"\nEnter Artist name: ";
			fflush(stdin);
			cin>>name;
			cout<<"Enter Gender: ";
			fflush(stdin);
			cin>>gender;
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter Art Name: ";
			cin>>artName;
		}
		void setName(char *name)
		{
			strcpy(this->name,name);
		}
		void setGender(char *gender)
		{
			strcpy(this->gender,gender);
		}
		void setAge(int age)
		{
			this->age=age;
		}
		void setArtName(char *artName)
		{
			strcpy(this->artName,artName);
		}
		char *getName()
		{
			return name;
		}
		char *getGender()
		{
			return gender;
		}
		int getAge()
		{
			return age;
		}
		char *getArtName()
		{
			return artName;
		}
		void show()
		{
			cout<<endl<<"Name: "<<name<<" Gender: "<<gender<<" Age: "<<		
			age<<"ArtName: "<<artName;
		}
};
void menu()
{
	int i;
	for(i=0; i<21; i++) printf("%c",205);
	cout<<"\n1. Student Details ";
	cout<<"\n2. Player Details ";
	cout<<"\n3. Artist Details : ";
	cout<<"\n4. Employee Details ";
	cout<<"\n5. Exit \n";
	for(i=0; i<21; i++) printf("%c",205);
	printf("\n");
	return;
}
void menu1()
{
	int i;
	for(i=0; i<24; i++) printf("%c",205);
	cout<<"\n1. Add New Details ";
	cout<<"\n2. Show Details ";
	cout<<"\n3. Go to main menu: \n";
	for(i=0; i<21; i++) printf("%c",205);
	printf("\n");
	return;
}
int main()
{
	Student s[10];
	Player p[10];
	Employee e[10];
	Artist a[10];
	int i,ch,choice;
	char goToMainMenu;
	
	do
	{
		system("cls");
		menu();
		cout<<"Enter Your Choice(Details Have to be Filled): ";
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: //Student's Details
					do
					{
						system("cls");
						menu1();
						cout<<"\nEnter Your Choice: ";
						cin>>choice;
						switch(choice)
						{
							case 1: //Accept students Details
									for(i=0; i<SZ; i++)
									{
										s[i].setDetails(i+1);
									}
									break;
							case 2: //Display Details
									for(i=0; i<SZ; i++)
									{
										s[i].show();
									}
									break;
							case 3: goToMainMenu=1;
									break;
							default: cout<<"You have entred invalid option.";
									break;	
						}
						if(!goToMainMenu)
						{
							cout<<"Press any key or enter to continue...";
							fflush(stdin);
							scanf("%c",&ch);
						}
					}while(!goToMainMenu);
					break;
			case 2: //Accept 10 Players name
					do
					{
						system("cls");
						menu1();
						cout<<"\nEnter Your Choice: ";
						cin>>choice;
						switch(choice)
						{
							case 1: //Accept Players Details
									for(i=0; i<SZ; i++)
									{
										p[i].setDetails(i+1);
									}
									break;
							case 2: //Display Details
									for(i=0; i<SZ; i++)
									{
										p[i].show();
									}
									break;
							case 3: goToMainMenu=1;
									break;
							default: cout<<"You have entred invalid option.";
									break;	
						}
						if(!goToMainMenu)
						{
							cout<<"Press any key or enter to continue...";
							fflush(stdin);
							scanf("%c",&ch);
						}
					}while(!goToMainMenu);
					break;
			case 3: //Accept 10 artists Details
					do
					{
						system("cls");
						menu1();
						cout<<"\nEnter Your Choice: ";
						cin>>choice;
						switch(choice)
						{
							case 1: //Accept Players Details
									for(i=0; i<SZ; i++)
									{
										a[i].setDetails(i+1);
									}
									break;
							case 2: //Display Details
									for(i=0; i<SZ; i++)
									{
										a[i].show();
									}
									break;
							case 3: goToMainMenu=1;
									break;
							default: cout<<"You have entred invalid option.";
									break;	
						}
						if(!goToMainMenu)
						{
							cout<<"Press any key or enter to continue...";
							fflush(stdin);
							scanf("%c",&ch);
						}
					}while(!goToMainMenu);
					break;
			case 4: //accept 10 Employee details
					do
					{
						system("cls");
						menu1();
						cout<<"\nEnter Your Choice: ";
						cin>>choice;
						switch(choice)
						{
							case 1: //Accept Players Details
									for(i=0; i<SZ; i++)
									{
										e[i].setDetails(i+1);
									}
									break;
							case 2: //Display Details
									for(i=0; i<SZ; i++)
									{
										e[i].show();
									}
									break;
							case 3: goToMainMenu=1;
									break;
							default: cout<<"You have entred invalid option.";
									break;	
						}
						if(!goToMainMenu)
						{
							cout<<"Press any key or enter to continue...";
							fflush(stdin);
							scanf("%c",&ch);
						}
					}while(!goToMainMenu);
					break;
			case 5: exit(0);
			break;			
		}
		cout<<"Press any key or enter to continue...";
		fflush(stdin);
		scanf("%c",&ch);
	}while(1);
}