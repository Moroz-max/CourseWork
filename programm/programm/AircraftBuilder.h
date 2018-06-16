#pragma once
#include "aircraft.h"

using namespace std;

class AircraftBuilder
{
protected:
	shared_ptr<aircraft> air;
public:
	AircraftBuilder() {}
	virtual ~AircraftBuilder() {}
	std::shared_ptr<aircraft> GetPizza() { return air; }

	void createNewPizzaProduct() { air.reset(new aircraft); }

	virtual void SetName(string Name) = 0;
	virtual void SetBelonging(string belonging) = 0;

	virtual void SetTypeAppatatus(string typeAppatatus) = 0;
	virtual void SetTypeWeapon(string typeWeapon) = 0;
	virtual void SetTypeEngine(string typeEngine) = 0;
	virtual void SetTypeChassis(string typeChassis) = 0;
	virtual void SetTypeTakeoffLanding(string typeTakeoffLanding) = 0;

	virtual void SetTakeoffWeight(string takeoffWeight) = 0;
	virtual void SetNumbersEngine(string numbersEngine) = 0;
	virtual void SetWingsLocation(string wingsLocation) = 0;
	virtual void SetFlightSpeed(string flightSpeed) = 0;
	virtual void SetManagement(string management) = 0;
	virtual void SetCrew(string crew) = 0;
	virtual void SetProductionYear(string productionYear) = 0;

};

