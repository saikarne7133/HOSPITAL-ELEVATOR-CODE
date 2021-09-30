#include <iostream>
#include"SystemController.h"
#include "Passanger.h"
#include"Trafficgen.h"
#include"StatisticKeeper.h"
#include <stdlib.h>  
#include <time.h>
#include <stdio.h> 
using namespace std;
int StatisticKeeper::Visitorno = 0;
int StatisticKeeper::Patientno = 0;
int StatisticKeeper::Medicalstaffno = 0;
int StatisticKeeper::Supportstaffno = 0;
int StatisticKeeper::SecurityPno = 0;



void StatisticKeeper::visitorn()
{
	Visitorno++;
}
void StatisticKeeper::Patientn()
{
	Patientno++;
}
void StatisticKeeper::Medicalstaffn()
{
	Medicalstaffno++;
}
void StatisticKeeper::SupportStaffn()
{
	Supportstaffno++;
}
void StatisticKeeper::SecurityPn()
{
	SecurityPno++;
}

void StatisticKeeper::display()
{
	int total;
	cout << "Visitor's count: " << Visitorno;
	cout << endl;
	cout << "Patient's count: " << Patientno << endl;
	cout << "MedicalStaff count: " << Medicalstaffno << endl;
	cout << "SupportStaff count: " << Supportstaffno << endl;
	cout << "SecurityStaff count: " << SecurityPno << endl;
	total = Visitorno + Medicalstaffno + Supportstaffno + SecurityPno + Patientno;
	cout << "total no of passanger: " << total << endl;

}
