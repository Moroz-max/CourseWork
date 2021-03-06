#pragma once
#include "AircraftBuilder.h"


class combat_aircraft : public AircraftBuilder
{
public:
	combat_aircraft() : AircraftBuilder() {}
	~combat_aircraft() {}

	void SetName() { air->SetName(Entry("Name")); }
	void SetBelonging() { air->SetBelonging("Military"); }

	void SetTypeAppatatus() { air->SetTypeAppatatus("combat_aircraft"); }
	void SetTypeWeapon() { air->SetTypeWeapon(Entry("TypeWeapon")); }
	void SetTypeEngine() { air->SetTypeEngine(Entry("TypeEngine")); }
	void SetTypeChassis() { air->SetTypeChassis(Entry("TypeChassis")); }
	void SetTypeTakeoffLanding() { air->SetTypeTakeoffLanding(Entry("TypeTakeoffLanding")); }

	void SetTakeoffWeight() { air->SetTakeoffWeight(Entry("TakeoffWeight")); }
	void SetNumbersEngine() { air->SetNumbersEngine(Entry("NumbersEngine")); }
	void SetWingsLocation() { air->SetWingsLocation(Entry("WingsLocation")); }
	void SetFlightSpeed() { air->SetFlightSpeed(Entry("FlightSpeed")); }
	void SetManagement() { air->SetManagement(Entry("Management")); }
	void SetCrew() { air->SetCrew(Entry("Crew")); }
	void SetProductionYear() { air->SetProductionYear(Entry("ProductionYear")); }

};

