#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip.h>
#include<time.h>
#include<fstream.h>
# define ll long long
ll int price=0;
int grice,gpulse,gpetrol,gprice;
int members;
int taskr=0,taskpu=0,taskpe=0;
void database(char c,char * rno)
{
	ofstream fout;
	fout.open("database.csv",ios::app|ios::out);
	if(c=='p')
	{
		fout<<endl;
		fout<<rno<<" ,"<<grice<<" ,"<<gpulse<<" ,"<<gpetrol<<" ,"<<gprice;
	}
	else
	{
		fout<<endl;
		fout<<rno<<" ,"<<grice<<" ,"<<gpulse<<" ,"<<gpetrol<<" ,"<<gprice;

	}
	fout.close();

}
void renew()
{
	cout<<"PLEASE ENTER THE AMOUT OF STOCK THAT CAME"<<endl;
	ll int rrenew,purenew,perenew;
	cout<<"PLEASE ENTER THE RICE STOCK THAT CAME"<<endl;
	cin>>rrenew;
	cout<<"PLEASE ENTER THE PULSES STOCK THAT CAME"<<endl;
	cin>>purenew;
	cout<<"PLEASE ENTER THE PETROL STOCK THAT CAME"<<endl;
	cin>>perenew;
	fstream finr; //for rice
	fstream finpu;//for pulses
	fstream finpe;//for petrol
	finr.open("rice.dat",ios::binary|ios::in|ios::out);
	finpu.open("pulse.dat",ios::binary|ios::in|ios::out);
	finpe.open("petrol.dat",ios::binary|ios::in|ios::out);
	ll int rice,pulse,petrol;
	finr>>rice;
	finpu>>pulse;
	finpe>>petrol;
	finr.seekp(0);
	finpu.seekp(0);
	finpe.seekp(0);
	rice+=rrenew;
	pulse+=purenew;
	petrol+=perenew;
	finr<<rice;
	finpu<<pulse;
	finpe<<petrol;
	finr.close();
	finpu.close();
	finpe.close();

}
void check()
{
	clrscr();
	char * pass;
	pass=getpass("Please verify yourself by giving the password");
	if(strcmpi(pass,"hi")==0)
	{
		cout<<"PLEASE ENTER THE DESIRED OPTON"<<endl;
		cout<<"1.STOCK RENWED"<<endl;
		cout<<"2.STOCK NOT RENEWED"<<endl;
		int opt;
		cin>>opt;
		switch(opt)
		{
			case 1:renew();
				break;
			case 2:cout<<setw(6)<<"PLEASE RENEW ASAP(DONT BE GOPI BAHU)"<<endl;
				break;
			default:cout<<setw(6)<<"WRONG OPTION"<<endl;
		}
	}
}
void prior(char * rno)
{
	fstream finr; //for rice
	fstream finpu;//for pulses
	fstream finpe;//for petrol
	finr.open("rice.dat",ios::binary|ios::in|ios::out);
	finpu.open("pulse.dat",ios::binary|ios::in|ios::out);
	finpe.open("petrol.dat",ios::binary|ios::in|ios::out);
	ll int rice,pulse,petrol;
	finr>>rice;
	finpu>>pulse;
	finpe>>petrol;
	if(rice<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE RICE SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskr=1;
		ofstream ftask;
		ftask.open("taskr.dat",ios::binary|ios::ate);
		ftask<<taskr;
		ftask.close();
	}
	if(pulse<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE RICE SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskpu=1;
		ofstream ftask;
		ftask.open("taskpu.dat",ios::binary|ios::ate);
		ftask<<taskpu;
		ftask.close();
	}
	if(petrol<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE PETROL SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskpe=1;
		ofstream ftask;
		ftask.open("taskpe.dat",ios::binary|ios::ate);
		ftask<<taskpe;
		ftask.close();
	}
	cout<<"Please enter the members of the family"<<endl;
	cin>>members;
	grice=5*members;
	gpulse=5*members;
	gpetrol=5*members;
	rice-=grice;
	pulse-=gpulse;
	petrol-=gpetrol;
	finr.seekp(0);
	finpu.seekp(0);
	finpe.seekp(0);
	finr<<rice;
	finpu<<pulse;
	finpe<<petrol;
	finr.close();
	finpu.close();
	finpe.close();
	cout<<"RATION TO BE GIVEN IS  AS FOLLOWS ACCORDING TO THE LATEST GUIDELINES :"<<endl;
	cout<<"RICE: "<<grice<<" Kg"<<endl;
	cout<<"PULSES: "<<gpulse<<" Kg"<<endl;
	cout<<"PETROL: "<<gpetrol<<" L"<<endl;
	gprice=(grice*2)+(gpulse*3)+(gpetrol*4);
	cout<<"PRICE : Rs. "<<gprice<<endl;
	database('p',rno);
	price+=gprice;
	ofstream fout;
	fout.open("price.dat",ios::binary|ios::out);
	fout.seekp(0);
	fout<<price;
	fout.close();
	getch();
	clrscr();

}
void aay(char * rno)
{
	fstream finr; //for rice
	fstream finpu;//for pulses
	fstream finpe;//for petrol
	finr.open("rice.dat",ios::binary|ios::in|ios::out);
	finpu.open("pulse.dat",ios::binary|ios::in|ios::out);
	finpe.open("petrol.dat",ios::binary|ios::in|ios::out);
	ll int rice,pulse,petrol;
	finr>>rice;
	finpu>>pulse;
	finpe>>petrol;
	if(rice<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE RICE SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskr=1;
		ofstream ftask;
		ftask.open("taskr.dat",ios::binary|ios::ate);
		ftask<<taskr;
		ftask.close();
	}
	if(pulse<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE RICE SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskpu=1;
		ofstream ftask;
		ftask.open("taskpu.dat",ios::binary|ios::ate);
		ftask<<taskpu;
		ftask.close();
	}
	if(petrol<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE PETROL SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskpe=1;
		ofstream ftask;
		ftask.open("taskpe.dat",ios::binary|ios::ate);
		ftask<<taskpe;
		ftask.close();
	}
	cout<<"Please enter the members of the family"<<endl;
	cin>>members;
	grice=5*members;
	gpulse=5*members;
	gpetrol=5*members;
	rice-=grice;
	pulse-=gpulse;
	petrol-=gpetrol;
	finr.seekp(0);
	finpu.seekp(0);
	finpe.seekp(0);
	finr<<rice;
	finpu<<pulse;
	finpe<<petrol;
	finr.close();
	finpu.close();
	finpe.close();
	cout<<"RATION TO BE GIVEN IS  AS FOLLOWS ACCORDING TO THE LATEST GUIDELINES :"<<endl;
	cout<<"RICE: "<<grice<<" Kg"<<endl;
	cout<<"PULSES: "<<gpulse<<" Kg"<<endl;
	cout<<"PETROL: "<<gpetrol<<" L"<<endl;
	gprice=(grice*1)+(gpulse*2)+(gpetrol*3);
	cout<<"PRICE : Rs. "<<gprice<<endl;
	database('p',rno);
	price+=gprice;
	ofstream fout;
	fout.open("price.dat",ios::binary|ios::out);
	fout.seekp(0);
	fout<<price;
	fout.close();
	getch();
	clrscr();

}
void bpl(char * rno)
{
	fstream finr; //for rice
	fstream finpu;//for pulses
	fstream finpe;//for petrol
	finr.open("rice.dat",ios::binary|ios::in|ios::out);
	finpu.open("pulse.dat",ios::binary|ios::in|ios::out);
	finpe.open("petrol.dat",ios::binary|ios::in|ios::out);
	ll int rice,pulse,petrol;
	finr>>rice;
	finpu>>pulse;
	finpe>>petrol;
	if(rice<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE RICE SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskr=1;
		ofstream ftask;
		ftask.open("taskr.dat",ios::binary|ios::ate);
		ftask<<taskr;
		ftask.close();
	}
	if(pulse<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE RICE SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskpu=1;
		ofstream ftask;
		ftask.open("taskpu.dat",ios::binary|ios::ate);
		ftask<<taskpu;
		ftask.close();
	}
	if(petrol<=2500)
	{
		cout<<setw(6)<<"PLEASE CALL FOR THE PETROL SUPPLY"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		taskpe=1;
		ofstream ftask;
		ftask.open("taskpe.dat",ios::binary|ios::ate);
		ftask<<taskpe;
		ftask.close();
	}
	cout<<"Please enter the members of the family"<<endl;
	cin>>members;
	grice=5*members;
	gpulse=5*members;
	gpetrol=5*members;
	rice-=grice;
	pulse-=gpulse;
	petrol-=gpetrol;
	finr.seekp(0);
	finpu.seekp(0);
	finpe.seekp(0);
	finr<<rice;
	finpu<<pulse;
	finpe<<petrol;
	finr.close();
	finpu.close();
	finpe.close();
	cout<<"RATION TO BE GIVEN IS  AS FOLLOWS ACCORDING TO THE LATEST GUIDELINES :"<<endl;
	cout<<"RICE: "<<grice<<" Kg"<<endl;
	cout<<"PULSES: "<<gpulse<<" Kg"<<endl;
	cout<<"PETROL: "<<gpetrol<<" L"<<endl;
	gprice=0;
	cout<<"PRICE : Rs. "<<gprice<<endl;
	database('p',rno);
	price+=gprice;
	ofstream fout;
	fout.open("price.dat",ios::binary|ios::out);
	fout.seekp(0);
	fout<<price;
	fout.close();
	getch();
	clrscr();

}
void ration(tm*a)
{
	if(taskpu==1||taskr==1||taskpe==1)
	{
		cout<<setw(6)<<"PLEASE CALL THE OWNER"<<endl;
		getch();
		clrscr();
		check();
	}
	if(price==0)
	{
		ifstream fin;
		fin.open("price.dat",ios::binary|ios::in);
		fin>>price;
		fin.close();
	}
	char * rno;
	rno=getpass("Please enter the ration card number:");
	if(strcmpi(rno,"yo")==0)
	{
		ll int temp;
		ifstream fin;
		fin.open("price.dat",ios::binary|ios::in);
		fin>>temp;
		cout<<"TOTAL SALE TILL NOW IS: "<<temp<<endl;
	}
	if(strlen(rno)==8)
	{
		cout<<"Please enter the desired option"<<endl;
		cout<<"1.Priority card"<<endl;
		cout<<"2.Antyodya(AAY) ration card"<<endl;
		cout<<"3.Below Poverty Line ration card"<<endl;
		int opt;
		cin>>opt;
		switch(opt)
		{
			case 1: if(a->tm_hour>=18 && a->tm_hour<23)
					prior(rno);
				else
					cout<<"SORRY YOUR TIME IS UP"<<endl;
					getch();
					clrscr();
				break;
			case 2: if(a->tm_hour>=12 && a->tm_hour<16)
					aay(rno);

				else
					cout<<"SORRY YOUR TIME IS UP"<<endl;
					getch();
					clrscr();
				break;
			case 3:if(a->tm_hour>=0 && a->tm_hour<16)
					bpl(rno);

				else
					cout<<"SORRY YOUR TIME IS UP"<<endl;
					getch();
					clrscr();
				break;
			case 4:exit(0);
				break;
			default:cout<<"Wrong option"<<endl;

		}

	}
	else
	{
		if(strcmpi(rno,"yo")!=0)
			cout<<"Wrong number"<<endl;
		getch();
		clrscr();
	}
}
void welcome()
{

	cout<<setw(6)<<"IIIIIIIIIIIIIIIII     IIIIIIIIIIIIIIIIIII      "<<endl;
	cout<<setw(6)<<"IIII         IIII     II	       II      "<<endl;
	cout<<setw(6)<<"IIII         IIII     II  	       II      "<<endl;
	cout<<setw(6)<<"IIII         IIII     II	       II      "<<endl;
	cout<<setw(6)<<"IIII         IIII     IIIIIIIIIIIIIIIIIII      "<<endl;
	cout<<setw(6)<<"IIIIIIIIIIIIIIIII     II	       II      "<<endl;
	cout<<setw(6)<<"IIII         IIII     II	       II      "<<endl;
	cout<<setw(6)<<"IIII         IIII     II  	       II      "<<endl;
	cout<<setw(6)<<"IIII         IIII     II	       II      "<<endl;
	cout<<setw(6)<<"IIII         IIII     IIIIIIIIIIIIIIIIIII      "<<endl;
	getch();
	tm*a;
	time_t z;
	time(&z);
	a=localtime(&z);
	ration(a);
	welcome();
}
void main()
{
	clrscr();
	welcome();
	getch();
}
