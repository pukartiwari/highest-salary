#include<iostream>
#include<iomanip>
using namespace std;
class employee{
			private:
				string name;
				int id;
				int salary;
			public:
				void getData(string n,int i, int s )
				{
					name=n;
					id=i;
					salary=s;
				}
				friend employee getHeighestsalary(employee[]);
				void display()
				{
					cout<<endl<<"The details of the employee with the heighest salary is:"<<endl;
					cout<<"Name="<<name<<endl
						<<"Id="<<id<<endl
						<<"salary="<<salary;
					
				}
};
employee getHeighestsalary(employee ep[])
{
	employee temp;
	for(int j=0;j<3;j++)
	{
		for(int k=j+1;k<10;k++)
		{
			if(ep[j].salary<ep[k].salary)
			{
				temp=ep[j];
				ep[j]=ep[k];
				ep[k]=temp;
			}
		}
	}
	return ep[0];
}
int main()
{
	string tempName;
	int tempId,tempSalary;
	employee e[3],temp;
	for(int j=0;j<3;j++)
	{
		cout<<"Enter the name of "<<j+1<<" employee: ";
		getline(cin,tempName);
		fflush(stdin);
		cout<<"Enter the id of "<<j+1<<" employee: ";
		cin>>tempId;
		fflush(stdin);
		cout<<"Enter the salary of "<<j+1<<" employee: ";
		cin>>tempSalary;
		fflush(stdin);
		e[j].getData(tempName,tempId,tempSalary);
		cout<<endl<<"----------------------------------------------"<<endl;
	}
	temp=getHeighestsalary(e);
	temp.display();
	return 0;
}
