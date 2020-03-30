#include<fstream>
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
class cricket
{
	public:
		char team[100];
		int i;
		char name[10];
		int a;
		void add();
		void input();
		void Delete();
		void fantasy()
		{
			cout<<"you have entered IPL Tournament Organiser"<<"\n";
	cout<<"\n"<<"--------------------------------------------------------------------"<<"\n";
	cout<<"                                                                                  "<<"\n";
	cout<<"1.TEAM NAMES"<<"\n"<<"2.TORNAMENT SCHEDULE"<<"\n"<<"3.TOURNAMENT RESULT"<<"\n";
	cout<<"4.TEAM SQUAD"<<"\n"<<"5.POINTS TABLE"<<"\n"<<"6.ADD TEAM"<<"\n"<<"7.DELETE TEAM"<<"\n"<<"8.FAIRPLAY TABLE"<<"\n"<<"9.PLAYER ATTRIBUTES";
	cout<<"\n------------------------------------------------------------------"<<"\n";
	cout<<"which category you want to see ?"<<"\n";
	cin>>i;
	if(i==1)
	{
            {
				fstream infile;
		infile.open("dtn.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
}
	else if(i==2)
	{
		   {
				fstream infile;
		infile.open("tsd.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
	}
	else if(i==3)
	{
		   {
				fstream infile;
		infile.open("trd.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
	}
	else if(i==4)
	{
		{
				fstream infile;
		infile.open("dtn.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		cout<<"enter the team number you want to see:"<<endl;
		cin>>a;
		if(a==1)
		{
			fstream infile;
		infile.open("SRH.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==2)
			{
			fstream infile;
		infile.open("MI.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==3)
			{
			fstream infile;
		infile.open("CSK.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==4)
			{
			fstream infile;
		infile.open("RCB.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==5)
			{
			fstream infile;
		infile.open("DD.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
			else if(a==6)
			{
			fstream infile;
		infile.open("RR.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				else if(a==7)
			{
			fstream infile;
		infile.open("KKR.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				else if(a==8)
			{
			fstream infile;
		infile.open("KXIP.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else
		{
			cout<<"please enter valid data"<<"\n";
		}
				int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
		}
	else if(i==5)
	{
		{
			fstream infile;
		infile.open("RECORD.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
	int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
	}
	else if(i==6)
	{
		{
		add();
	}
		int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
}
	else if(i==7)
{
	{
		Delete();
	}
		int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
}


else if(i==8)
{
	{
		ifstream fin;
		fin.open("fairplay.txt");
		string file;
		while(fin.good())
		{
			getline(fin,file);
			cout<<file<<endl;
		}
	}
	int p;
   	cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
}


else if(i==9)
{
	system("cls");

	{
		fstream infile;
		infile.open("dtn.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		cout<<"enter the team number you want to see:"<<endl;
		cin>>a;
		if(a==1)
		{
			system("cls");
		fstream infile;
		infile.open("SRHA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==2)
			{
				system("cls");
			fstream infile;
		infile.open("MIA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==3)
			{
				system("cls");
			fstream infile;
		infile.open("CSKA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==4)
			{
				system("cls");
			fstream infile;
		infile.open("RCBA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==5)
			{
				system("cls");
			fstream infile;
		infile.open("DDA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
			else if(a==6)
			{
				system("cls");
			fstream infile;
		infile.open("RRA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				else if(a==7)
			{
				system("cls");
			fstream infile;
		infile.open("KKRA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				else if(a==8)
			{
				system("cls");
			fstream infile;
		infile.open("KXIPA.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else
		{
			cout<<"please enter valid data"<<"\n";
		}
	
	
	
	
	int p;
   	cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
    else
    {
    	cout<<"please enter valid data"<<"\n";
	}
}


	else
	{
		{
		cout<<"please enter valid data"<<"\n";
	}
	int p;
   cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
	}
}
};

void cricket::input()
{
	cout<<"enter new team name:"<<"\n";
	char team[100];
	cin>>team;
	{
				fstream infile;
		infile.open("dtn.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
	cout<<"new team added to the file"<<"\n";
	cout<<"6.\t\t"<<team;
}
void cricket::add()
{
	{
	fstream fil;
	cricket fileobj;
	char ch='y';
	fil.open("display.txt",ios::app| ios::out);
	while(ch=='y' || ch =='Y')
	{
		fileobj.input();
		fil.write((char*)&fileobj, sizeof(fileobj));
		exit(0);
	}
	fil.close();
    }
	int p;
    cout<<"\n"<<"enter 1 for home page:"<<"\n";
    cin>>p;
    if(p==1)
    {
    fantasy();
    }
}
void cricket::Delete()
{
  
  string line, name;
  cout << "Please Enter the name of record you want to delete: ";
  cin >> name;
  ifstream myfile;
  ofstream temp;
  name.append(".txt");
  const char* filename = name.c_str();
  myfile.open(filename,ios::in);
  temp.open("temp.txt");
  while (getline(myfile,line))
  {
    if (line != name)
      temp << line << endl;
  }
  cout << "The record with the name " << name << " has been deleted if it exsisted" << endl;
  myfile.close();
  temp.close();
  remove(filename);
  rename("temp.txt", filename);
  
}		


int main()
{  
	system("color F1");
	system("pause");
	cricket c;
	c.fantasy();
}

