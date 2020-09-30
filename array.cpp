#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	cout<<setfill('=')<<setw(40)<<"="<<endl;
	cout<<setfill(' ')<<setw(20)<<"MENU"<<endl;
	cout<<setfill('=')<<setw(40)<<"="<<endl;
	cout<<"1.Input student records"<<endl;
	cout<<"2.View all student records"<<endl;
	cout<<"3.Exit"<<endl;
	int quiz[100];
	int mid[100];
	int final[100];
	int stu;
	char choice;
	
	do
	{
		cout<<"Select menu :";
		cin>>choice;
		if (choice =='3')break;
		if(choice =='1'){
			cout<<"Input Number of Student :";
			cin>>stu;
			for(int i=0;i<stu;i++)
			{
				cout<<"Number"<<i+1<<endl;
				cout<<"Input quiz:";
				cin>>quiz[i];
				cout<<"Input midterm";
				cin>>mid[i];
				cout<<"Input final";
				cin>>final[i];
			}
		} else if (choice =='2');
				cout<<setfill('-')<<setw(70)<<"-"<<endl;
				cout<<setfill(' ')<<setw(0)<<"StuID"<<setfill(' ')<<setw(10)<<"Quiz"<<setfill(' ')<<setw(20)<<"Midterm"<<setfill(' ')<<setw(30)<<"Final"<<endl;
				cout<<setfill('-')<<setw(70)<<"-"<<endl;
				for(int x = 0; x<stu ; x++)
				{	cout<<x+1<<setw(15)<<setfill(' ')<<quiz[x]<<setw(15)<<setfill(' ')<<mid[x]<<setw(15)<<setfill(' ')<<final[x]<<endl;
				}
				cout<<setfill('-')<<setw(70)<<"-"<<endl;

	}
	while(false);

	main();
		system("pause");
	return 0;
}
