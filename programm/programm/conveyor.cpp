#include "stdafx.h"
#include "conveyor.h"


conveyor::conveyor()
{
}


conveyor::~conveyor()
{
}

void conveyor::ConstructPizza()
{
	aircraftBuilder->createNewPizzaProduct();

	aircraftBuilder->SetName();
	aircraftBuilder->SetBelonging();

	aircraftBuilder->SetTypeAppatatus();
	aircraftBuilder->SetTypeWeapon();
	aircraftBuilder->SetTypeEngine();
	aircraftBuilder->SetTypeChassis();
	aircraftBuilder->SetTypeTakeoffLanding();

	aircraftBuilder->SetTakeoffWeight();
	aircraftBuilder->SetNumbersEngine();
	aircraftBuilder->SetWingsLocation();
	aircraftBuilder->SetFlightSpeed();
	aircraftBuilder->SetManagement();
	aircraftBuilder->SetProductionYear();
}

void conveyor::menu() {

}


