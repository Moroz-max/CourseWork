#pragma once
#include "AircraftBuilder.h"

#define N 100 // ������������ ����� �������� ����� � �����

// �������� ��� ������ ���������
class conveyor
{
private:
	AircraftBuilder * aircraftBuilder;
public:
	conveyor() : aircraftBuilder(NULL) {}
	~conveyor() { }

	void SetPizzaBuilder(AircraftBuilder* b) { aircraftBuilder = b; }
	std::shared_ptr<aircraft> GetPizza() { return aircraftBuilder->GetPizza(); }
	void ConstructPizza();
};

