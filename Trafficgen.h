#pragma once
#include"StatisticKeeper.h"
#include "Passanger.h"
#ifndef Trafficgen_H_
#define Trafficgen_H_
#include <fstream> 
using namespace std;

class Trafficgen
{
private:

	int flo, ele, cap, newpassengers;
	int visitor_req, visitor_emer, visitor_eva;
	int patient_req, patient_emer, patient_eva, patient_min, patient_max;
	int supports_req, supports_emer, supports_eva, supports_min, supports_max;
	int medicals_req, medicals_emer, medicals_eva;
	int securitys_req, securitys_emer, securitys_eva;
	string passtype;
	string dummy;
	float visitor_p, patient_p, supports_p, medicals_p, securitys_p;
	char dummyc;


public:
	void Trafficg(StatisticKeeper& , Passanger*& );
	int passangerp();
	int callp();
	int weightp(int a);
	int current_floorm();
	int destination_floorm();
	friend ifstream & operator>>(ifstream &, Trafficgen &);
	friend ostream & operator<<(ostream &, Trafficgen &);



};
#endif
