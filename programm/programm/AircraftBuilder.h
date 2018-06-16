#pragma once
#include "aircraft.h"

using namespace std;


// обстрактный сборщик самолетов
class AircraftBuilder
{
protected:
	shared_ptr<aircraft> air;

	string Entry(const char[]);
public:
	AircraftBuilder() {}
	virtual ~AircraftBuilder() {}
	std::shared_ptr<aircraft> GetPizza() { return air; }

	void createNewPizzaProduct() { air.reset(new aircraft); }

	virtual void SetName() = 0;
	virtual void SetBelonging() = 0;

	virtual void SetTypeAppatatus() = 0;
	virtual void SetTypeWeapon() = 0;
	virtual void SetTypeEngine() = 0;
	virtual void SetTypeChassis() = 0;
	virtual void SetTypeTakeoffLanding() = 0;

	virtual void SetTakeoffWeight() = 0;
	virtual void SetNumbersEngine() = 0;
	virtual void SetWingsLocation() = 0;
	virtual void SetFlightSpeed() = 0;
	virtual void SetManagement() = 0;
	virtual void SetCrew() = 0;
	virtual void SetProductionYear() = 0;

};

