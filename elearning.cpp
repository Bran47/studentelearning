#include<iostream>
#include<conio.h>
using namespace std;
int main()
/*student view portal in an elearning plartform*/
{

	//login page//
 string name;
 cout<<"enter user name";
 cin>>name;
    //password protected//
 string password;
 cout<<"enter in password";
 cin>>password;
   //enrol to a course//
//several course will be displayed choose units you are taking//
 char course = 1;
 switch(course)
 {
 	case 1:
 	    cout<<"enroll to  programming"<<endl;
 	case 2:
 	    cout<<"enroll the mathematics in compiuting"<<endl;
 	case 3:
 		cout<<"enroll to accounting"<<endl;
 	case 4:
	    cout<<"enroll to business management"<<endl;
	default:
		cout<<"dont enroll"<<endl;

 
 //ams student portal//
 string homepage;
 //	cntains student details//
 string name;
 cout<<"student name";
 string email;
 cout<<"student email address";
 cin>>email;
 int phonenumber;
 cout<<"input phone number";
 cin>>phonenumber;
}
 //student course work marks and grades display that semester//
 //declare variables//
 int a,b,c,d;
 //declare variable percentage
 float per;
 cout<<"enter programming class marks";
 cin>>a;
 cout<<"enter mathematics in business computing marks";
 cin>>b;
 cout<<"enter business managment marks";
 cin>>c;
 cout<<"enter accounting marks";
 cin>>d;

 //calculate the percentage//
 per=(a+b+c+d);
 //condition statement//
 {
 if(per>70)
cout<<"A grade";
else
if(per>60)
cout<<"B grade";
else
if(per>50)
cout<<"C grade";
else
if(per>40)
cout<<"D grade";
else
cout<<"E grade";
}

//display fee statment//
int fee;
cout<<"display fee balance";
cin>>fee;

//student attedance//;

int attedance;
cout<<"enter accounting attedance ";
cin>>attedance;
cout<<"enter programming attedance";
cin>>attedance;
{
string sitexam,dontsit;
if (attedance>60)
cout<<"student should sit for the exam";
cin>>sitexam;
if(attedance<30)
cout<<"unable to sit the exam";
cin>>dontsit;

}
 return 0;
 
}

	
	

