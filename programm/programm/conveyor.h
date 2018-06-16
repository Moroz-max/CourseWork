#pragma once
#include "AircraftBuilder.h"


class conveyor
{
private:
	AircraftBuilder * aircraftBuilder;
public:
	conveyor() : aircraftBuilder(NULL) {}
	~conveyor() { }

	void SetPizzaBuilder(AircraftBuilder* b) { aircraftBuilder = b; }
	//std::shared_ptr<aircraft> GetPizza() { return aircraftBuilder->GetPizza(); }
	//void ConstructPizza()
	//{
	//	aircraftBuilder->createNewPizzaProduct();
	//	aircraftBuilder->buildDough();
	//	aircraftBuilder->buildSauce();
	//	aircraftBuilder->buildTopping();
	//}
};

