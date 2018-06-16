#pragma once
#include <string>

using namespace std;

class aircraft
{
protected:

	string Belonging; // принадлежность (гр. или военная)
	
	string TypeAppatatus; // тип аппарата
	string TypeWeapon; // тип вооружения
	string TypeEngine; // тип двигателя
	string TypeChassis; // тип шасси
	string TypeTakeoffLanding; // тип взлета и посадки
	
	string TakeoffWeight; // взлетная масса
	string NumbersEngine; // число двигателей
	string WingsLocation; // рассположение крыльев
	string FlightSpeed; // скорость полета
	string Management; // способ управления
	string Crew; // экипаж
	string ProductionYear; // год производства
	
public:
	aircraft();
	~aircraft();


};

