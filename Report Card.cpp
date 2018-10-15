000#include <iostream>
#include<fstream>
#include <string>
using namespace std;


class student
{
	int IDNumber;
	string Name;
	int Age;
	char Gender;
	double Score;
	char Grade;
public:
	void Input();
	void Output();
};

void student :: Input(){
	cout<<endl;
	cout << "Enter ID Number: ";
	cin >> IDNumber;
	cout << endl;
	cout << "Enter Name: ";
	cin >> Name;
	cout<<endl;
	cout << "Enter Age: ";
	cin >> Age;
	cout<<endl;
	cout << "Enter M for Male or F for Female: ";
	cin >> Gender;
	cout<<endl;
	cout << "Enter Score: ";
	cin >> Score;
	cout <<endl;
	
If(Score>=80 && Score<=100)
	Grade = 'A';
else if(Score>=70 && Score <=79)
	StudentA[counter].Grade = 'B';
else if(Score>=60 && Score <=69)
	Grade = 'C';
else if(Score>=50 && Score<=59)
	Grade = 'D';
else if(Score>=40 && Score<=49)
	Grade = 'E';
else if(Score>=0 && Score <=39)
	Grade = 'F';

}


void student :: Output(){
	cout<<"*********************************************"<<endl;
	cout<<"ID Number: "<< IDNumber<<endl;
	cout<<"Name: "<<Name<<endl;
	cout<<"Age: "<<Age<<endl;
	cout<<"Gender: "<<Gender<<endl;
	cout<<"Score: "<< Score<<endl;
	cout<<"Grade: "<<Grade<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"Average Age: "<< Age/s[i];
	cout<<"Average Score: "<< Score/s[i];
}

int main(){
	student s[5];
	fstream file;
	int i;
	
	file.open("Student.txt");
	cout<<"Student Details";
	
for(i=0;i<5;i++){
	s[i].Input();
	file.write((char*)&s[i], sizeof(s[i]));
}
file.close();

file.open("Student.txt");
cout<<"Student Information ";

for(i=0;i<5;i++){
	file.read((char *)&s[i], sizeof(s[i]));
	s[i].Output();
}
file.close();

return 0;	
}
