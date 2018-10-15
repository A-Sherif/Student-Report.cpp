#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
	{
		int IDNumber;
		string Name;
		int Age;
		char Gender;
		double Score;
		char Grade;
	}StudentA[4];

	
int main()
{
int counter;
for(counter = 0; counter <5; counter++){
ofstream fin("Student.txt");
fin>>getline(cin,StudentA[counter].IDNumber)

fin>>StudentA[counter].Name;

fin>>StudentA[counter].Age;

fin>>StudentA[counter].Gender;

fin>>StudentA[counter].Score;
}

for(counter = 0; counter <5; counter++){
cout<<"==================================\n"<<endl;
cout<<"Student Details \n";
cout<<"ID: "<<StudentA[counter].IDNumber<<endl;
cout<< "Name: "<<StudentA[counter].Name<<endl;
cout<<"Age: "<<StudentA[counter].Age<<endl;
cout<<"Gender: "<<StudentA[counter].Gender<<endl;
cout<<"Score: "<<StudentA[counter].Score<<endl;


if(StudentA[counter].Score>=80 && StudentA[counter].Score<=100)
	StudentA[counter].Grade = 'A';
else if(StudentA[counter].Score>=70 && StudentA[counter].Score <=79)
	StudentA[counter].Grade = 'B';
else if(StudentA[counter].Score>=60 && StudentA[counter].Score <=69)
	StudentA[counter].Grade = 'C';
else if(StudentA[counter].Score>=50 && StudentA[counter].Score<=59)
	StudentA[counter].Grade = 'D';
else if(StudentA[counter].Score>=40 && StudentA[counter].Score<=49)
	StudentA[counter].Grade = 'E';
else if(StudentA[counter].Score>=0 && StudentA[counter].Score <=39)
	StudentA[counter].Grade = 'F';
cout<<"Grade: "<<StudentA[counter].Grade;	
}
cout<<endl;

cout<<"==================================\n";



return 0;
}
