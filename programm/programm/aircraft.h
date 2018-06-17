#pragma once
#include <string>
#include <iostream>
#include <memory>
#include <fstream>

#define N 100 // ������������ ����� �������� ����� � �����

using namespace std;

// �������
class aircraft
{
protected:
	string name; // �������� ������ �������

	string Belonging; // �������������� (��. ��� �������)

	string TypeAppatatus; // ��� �������� (������������ �������, ������� �������, ��������, ������������)
	string TypeWeapon; // ��� ����������
	string TypeEngine; // ��� ���������
	string TypeChassis; // ��� �����
	string TypeTakeoffLanding; // ��� ������ � �������

	string TakeoffWeight; // �������� �����
	string NumbersEngine; // ����� ����������
	string WingsLocation; // ������������� �������
	string FlightSpeed; // �������� ������
	string Management; // ������ ����������
	string Crew; // ������
	string ProductionYear; // ��� ������������

public:
	aircraft() {}
	~aircraft() {}

	void SetName(string Name) { name = Name; }
	void SetBelonging(string belonging) { Belonging = belonging; }

	void SetTypeAppatatus(string typeAppatatus) { TypeAppatatus = typeAppatatus; }
	void SetTypeWeapon(string typeWeapon) { TypeWeapon = typeWeapon; }
	void SetTypeEngine(string typeEngine) { TypeEngine = typeEngine; }
	void SetTypeChassis(string typeChassis) { TypeChassis = typeChassis; }
	void SetTypeTakeoffLanding(string typeTakeoffLanding) { TypeTakeoffLanding = typeTakeoffLanding; }

	void SetTakeoffWeight(string takeoffWeight) { TakeoffWeight = takeoffWeight; }
	void SetNumbersEngine(string numbersEngine) { NumbersEngine = numbersEngine; }
	void SetWingsLocation(string wingsLocation) { WingsLocation = wingsLocation; }
	void SetFlightSpeed(string flightSpeed) { FlightSpeed = flightSpeed; }
	void SetManagement(string management) { Management = management; }
	void SetCrew(string crew) { Crew = crew; }
	void SetProductionYear(string productionYear) { ProductionYear = productionYear; }

	void show();

	bool Save(ofstream &file);
	bool Read(ifstream &file);

};

