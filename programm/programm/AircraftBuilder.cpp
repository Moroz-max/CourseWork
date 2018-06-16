#include "stdafx.h"
#include "AircraftBuilder.h"


string AircraftBuilder::Entry(const char a[]) {
	char str[N] = "";
	cout << a << ": ";
	cin >> str;
	return str;
}
