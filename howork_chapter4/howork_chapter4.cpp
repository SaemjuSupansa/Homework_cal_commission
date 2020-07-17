/*Supansa Kaewsompak
6006021611062
IT4_RB*/

#include<iostream>
#include<string>
using namespace std;
void cal_com(float, float, float);
int main()
{
	string name;
	float salary, sale, commission, dee;
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> commission;
	cout << "\n\n";
	cout << "Your name = " << name << endl;
	cal_com(salary, sale, commission);
	return 0;
}

void cal_com(float salary, float sale, float commission)
{
	cout << "Total Reevenue " << salary + (sale * (commission/100)) << " Bath" << endl;
}