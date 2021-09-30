#include"Passanger.h"
#include <iostream>
using namespace std;
int Visitor::VisitorCount = 0;
int Patient::PatientCount = 0;
int SecurityP::SecurityPCount = 0;
int SupportStaff::SupportCount = 0;
int MedicalStaff::MedicalCount = 0;

Passanger::Passanger(int s, string n, int w, int cf, int df)
{
	id = s;
	name = n;
	weight = w;
	current_floor = cf;
	destination_floor = df;

}


Visitor::Visitor(int s, string n, int w, int cf, int df, string p) :Passanger(s, n, w, cf, df)
{
	VisitorCount++;
	id = VisitorCount;
	p = pname;
}

void Visitor::introduce()
{
	cout << endl;
	cout << "visitors id is :" << id << endl;
	cout << endl;
	/*cout<<"name is"<<n;
	cout<<endl;
	cout<<"Weight: "<<weight;
	cout<<endl;
	cout<<"current Floor "<<current_floor;
	cout<<endl;
	cout<<"Destination Floor"<<destination_floor;
	cout<<endl;*/
}



Patient::Patient(int s, string n, int w, int cf, int df, int lw) :Passanger(s, n, w, cf, df)
{
	PatientCount++;
	id = PatientCount;
	lw = light_wt;
}

void Patient::introduce()
{
	cout << endl;
	std::cout << "Patient id:" << id << endl;
	cout << endl;
}



SecurityP::SecurityP(int s, string n, int w, int cf, int df, int sp) :Passanger(s, n, w, cf, df)
{
	SecurityPCount++;
	id = SecurityPCount;
	sp = s_p;
}

void SecurityP::introduce()
{
	cout << endl;
	std::cout << "Security id:" << id << endl;
	cout << endl;
}




void Staff::introduce()
{
	cout << endl;
	std::cout << "Staff request method";
	cout << endl;
}


SupportStaff::SupportStaff(int ew)
{
	SupportCount++;
	id = SupportCount;
	equi_wt = ew;
}


void SupportStaff::introduce()
{
	cout << endl;
	std::cout << "SupportStaff id:" << id << endl;
	cout << endl;
}

MedicalStaff::MedicalStaff(string dept)
{
	MedicalCount++;
	id = MedicalCount;
	department = dept;
}

void MedicalStaff::introduce()
{
	cout << endl;
	std::cout << "MedicalStaff id is " << id;
	cout << endl;
}


