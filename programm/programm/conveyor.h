#pragma once
#include "AircraftBuilder.h"

#include "combat_aircraft.h"
#include "helicopter.h"
#include "passenger_airplane.h"
#include "quadrupter.h"

// конвейер для сборки самолетов
class conveyor
{
private:
	AircraftBuilder * aircraftBuilder;

	string Entry(const char[]);
	bool Save();
	bool Read();
public:
	conveyor() : aircraftBuilder(NULL) {}
	~conveyor() { }

	void SetAircraftBuilder(AircraftBuilder* b) { aircraftBuilder = b; }
	std::shared_ptr<aircraft> GetAircraft() { return aircraftBuilder->GetAircraft(); }
	void ConstructAircraft();

	void menu();
	void MenuCreate();
};

