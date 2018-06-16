#pragma once
#include "AircraftBuilder.h"


class passenger_airplane : public AircraftBuilder
{
public:
	passenger_airplane() : AircraftBuilder() {} {}
	~passenger_airplane() {}

	void SetName() { air->SetName(Entry("Name")); }
	void SetBelonging() { air->SetBelonging("Civil"); }

	void SetTypeAppatatus() { air->SetTypeAppatatus("passenger airplane"); }
	void SetTypeWeapon() { air->SetTypeWeapon("Absent"); }
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

