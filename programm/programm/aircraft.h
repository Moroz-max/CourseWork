#pragma once
#include <string>
#include <iostream>
#include <memory>

using namespace std;

// самолет
class aircraft
{
protected:
	string name; // название данной техники

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

	void show() {
		cout << " aircraft " << endl
			<< "Name: " << name << endl
			<< "Belonging: " << Belonging << endl

			<< "TypeAppatatus: " << TypeAppatatus << endl
			<< "TypeWeapon " << TypeWeapon << endl
			<< "TypeEngine: " << TypeEngine << endl
			<< "TypeChassis: " << TypeChassis << endl
			<< "TypeTakeoffLanding: " << TypeTakeoffLanding << endl

			<< "TakeoffWeight: " << TakeoffWeight << endl
			<< "NumbersEngine: " << NumbersEngine << endl
			<< "WingsLocation: " << WingsLocation << endl
			<< "FlightSpeed: " << FlightSpeed << endl
			<< "Management: " << Management << endl
			<< "Crew: " << Crew << endl
			<< "ProductionYear: " << ProductionYear << endl;

		return;
	}

};

