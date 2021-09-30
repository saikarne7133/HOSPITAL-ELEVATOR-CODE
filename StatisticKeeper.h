#ifndef StatisticKeeper_H_
#define StatisticKeeper_H_

class StatisticKeeper
{
private:

public:
	static int Visitorno;
	static int Patientno;
	static int Medicalstaffno;
	static int Supportstaffno;
	static int SecurityPno;

	void visitorn();
	void Patientn();
	void Medicalstaffn();
	void SupportStaffn();
	void SecurityPn();
	void display();

};
#endif