#pragma once
#include <string>

using namespace std;

class aircraft
{
protected:

	string Belonging; // �������������� (��. ��� �������)
	
	string TypeAppatatus; // ��� ��������
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
	aircraft();
	~aircraft();


};

