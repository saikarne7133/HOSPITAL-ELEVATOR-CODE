#include <iostream>
#ifndef PASSANGER_H_
#define PASSANGER_H_
using namespace std;
class Passanger {
private:

	string name;
	int weight;
	int current_floor;
	int destination_floor;

protected:
	int  id;
public:

	Passanger(int s = 0, string n = "", int w = 0, int cf = 0, int df = 0);
	virtual void introduce() = 0;
};


class Visitor :public Passanger
{
private:
	string pname;
public:
	static int VisitorCount;
	Visitor(int s = 0, string n = "", int w = 0, int cf = 0, int df = 0, string p = "");
	void introduce();
};



class Patient :public Passanger
{
private:
	int light_wt;
public:
	static int PatientCount;
	Patient(int s = 0, string n = "", int w = 0, int cf = 0, int df = 0, int lw = 0);
	virtual void introduce();

};



class SecurityP :public Passanger
{
private:
	int s_p;
public:
	static int SecurityPCount;
	SecurityP(int s = 0, string n = "", int w = 0, int cf = 0, int df = 0, int sp = 0);
	virtual void introduce();

};



class Staff :public Passanger {
public:

	// Staff(int s=0,string n="",int w=0,int cf=0,int df=0):Passanger(s,n,w,cf,df);
	virtual void introduce();

};

class MedicalStaff :public Staff
{
private:
	string department;
public:
	static int MedicalCount;
	MedicalStaff(string dept = " ");
	virtual void introduce();

};


class SupportStaff :public Staff
{
private:
	int equi_wt;
public:
	static int SupportCount;
	SupportStaff(int ew = 0);
	virtual void introduce();

};
#endif








