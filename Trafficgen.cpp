#include"Trafficgen.h"
#include"Passanger.h"
#include"StatisticKeeper.h"

#include<string>
#include <iostream>
#include <stdlib.h>  
#include <time.h>
#include <stdio.h> 
#include <cctype>
#include <fstream> 
#include <vector>
using namespace std;


ifstream& operator >> (ifstream &fin, Trafficgen &trag)
{
	fin >> trag.flo;
	fin >> trag.ele >> trag.cap;
	fin >> trag.newpassengers;

	fin >> trag.dummy >> trag.visitor_p >> trag.dummyc >> trag.visitor_req >> trag.visitor_emer >> trag.visitor_eva;

	fin >> trag.dummy >> trag.patient_p >> trag.dummyc >> trag.patient_req >> trag.patient_emer >> trag.patient_eva >> trag.dummyc >> trag.patient_min >> trag.patient_max;

	fin >> trag.dummy >> trag.dummy >> trag.supports_p >> trag.dummyc >> trag.supports_req >> trag.supports_emer >> trag.supports_eva >> trag.dummyc >> trag.supports_min >> trag.supports_max;

	fin >> trag.dummy >> trag.dummy >> trag.medicals_p >> trag.dummyc >> trag.medicals_req >> trag.medicals_emer >> trag.medicals_eva;

	fin >> trag.dummy >> trag.dummy >> trag.securitys_p >> trag.dummyc >> trag.securitys_req >> trag.securitys_emer >> trag.securitys_eva;


	return fin;

}

ostream & operator<<(ostream &out, Trafficgen &trag)
{
	out << "no.of floors :" << trag.flo << endl;
	out << "no. of elevators :" << trag.ele << endl << "capacity :" << trag.cap << endl;
	out << "No. of new passengers arriving every second:" << trag.newpassengers << endl;

	out << "Visitor" << endl;

	out << "Probability of vistior: " << trag.visitor_p << endl;
	out << "Regular call from visitor: " << trag.visitor_req << endl;
	out << "Emergency call from visitor: " << trag.visitor_emer << endl;
	out << "Evacuate visitor: " << trag.visitor_eva << endl;


	out << "Patient" << endl;


	out << "Probability of Patient: " << trag.patient_p << endl;
	out << "Regular call from patient: " << trag.patient_req << endl;
	out << "Emergency call from patient: " << trag.patient_emer << endl;
	out << "Evacuate patient: " << trag.patient_eva << endl;
	out << "min weight patient: " << trag.patient_min << endl;
	out << "max weight patient: " << trag.patient_max << endl;

	out << "SupportStaff" << endl;


	out << "Probability of supports: " << trag.supports_p << endl;
	out << "Regular call from supports: " << trag.supports_req << endl;
	out << "Emergency call from supports: " << trag.supports_emer << endl;
	out << "Evacuate supports: " << trag.supports_eva << endl;
	out << "min weight supports: " << trag.supports_min << endl;
	out << "max weight supports: " << trag.supports_max << endl;

	out << "Medicalstaff" << endl;


	out << "Probability of medicals: " << trag.medicals_p << endl;
	out << "Regular call from medicals: " << trag.medicals_req << endl;
	out << "Emergency call from medicals: " << trag.medicals_emer << endl;
	out << "Evacuate medicals: " << trag.medicals_eva << endl;

	out << "Security:  " << endl;


	out << "Probability of securitys: " << trag.securitys_p << endl;
	out << "Regular call from securitys: " << trag.securitys_req << endl;
	out << "Emergency call from securitys:  " << trag.securitys_emer << endl;
	out << "Evacuate securitys: " << trag.securitys_eva << endl;

	return out;
}
int Trafficgen::passangerp()
{
	int p;
	// srand(time(NULL));
	p = rand() % 100 + 1;
	return p;
}

int Trafficgen::callp()
{
	int p;
	p = rand() % 100 + 1;
	return p;
}


int Trafficgen::weightp(int c)
{
	int p;
	if (c == 1)
	{
		p = rand() % patient_max + 1;
	}
	if (c == 2)
	{
		p = rand() % supports_max + 1;
	}
	return p;
}


int Trafficgen::current_floorm()
{
	int p;
	p = rand() % 8 + 1;
	return p;
}



int Trafficgen::destination_floorm()
{
	int p;
	p = rand() % 8 + 1;
	return p;

}


void Trafficgen::Trafficg(StatisticKeeper& sk1, Passanger*& p)
{
	//Passanger *p;
	int pro1, pro2, pro3, wti, c, pro4, pro5;
	pro1 = passangerp();
	//StatisticKeeper sk1;
	int visit = visitor_p * 100;
	if (pro1 <= visitor_p*100)
	{
		sk1.visitorn();

		pro2 = callp();


		if (pro2 <= visitor_req)


			pro4 = current_floorm();

		pro5 = destination_floorm();
		p = new Visitor();
		p->introduce();


	}
	if (pro1 > (visitor_p*100) && pro1 <=( visitor_p+ patient_p)*100)
	{
		sk1.Patientn();
		int req;
		pro2 = callp();
		req = patient_req;
		//cout<<"patient req is : "<<req<<endl;
		if (pro2 <= patient_req)

			pro3 = weightp(1);

		pro4 = current_floorm();

		pro5 = destination_floorm();
		p = new Patient();
		p->introduce();
		

	}
	if (pro1 > ((visitor_p + patient_p) * 100) && pro1 <= (visitor_p + patient_p + supports_p)*100)
	{
		sk1.SupportStaffn();

		pro2 = callp();

		if (pro2 <= supports_req)
		{
			cout << "A regular call" << endl;
		}

		if (pro2 > supports_req && pro2 <= 100)
		{
			cout << "An emergency call" << endl;
		}

		pro3 = weightp(2);

		pro4 = current_floorm();
		p = new SupportStaff();
		p->introduce();

	}
	if (pro1 > (visitor_p + patient_p + supports_p) * 100 && pro1 <= (visitor_p + patient_p + supports_p+ medicals_p) * 100)
	{
		sk1.Medicalstaffn();

		pro2 = callp();

		if (pro2 <= medicals_req)
		{
			cout << "A regular call" << endl;
		}

		if (pro2 > medicals_req)
		{
			cout << "An emergency call" << endl;
		}

		pro4 = current_floorm();

		pro5 = destination_floorm();
		p = new MedicalStaff();
		p->introduce();

	}
	if (pro1 > (visitor_p + patient_p + supports_p + medicals_p) * 100 )
	{
		sk1.SecurityPn();

		pro2 = callp();



		if (pro2 <= securitys_req)
		{
			cout << "A regular call" << endl;
		}
		if (pro2 > securitys_req && pro3 <= 100)
		{
			cout << "An evacuate call" << endl;
		}

		pro4 = current_floorm();

		pro5 = destination_floorm();
		p = new SecurityP();
		p->introduce();


	}

}

