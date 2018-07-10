#include <iostream>
#include <cmath>

int main(){

	double lotLength;
	double lotWidth;
	double lotArea;
	double houseLength;
	double houseWidth;
	double houseArea;
	double lawnArea;
	double mowRate;
	double mowTime;
	int h, m, s;

	std::cout << "Endter the length and width of the lot, in feet: ";
	std::cin >> lotLength >> lotWidth;
	lotArea = lotLength * lotWidth;

	std::cout << "Endter the length and width of the house, in feet: ";
	std::cin >> houseLength >> houseWidth;
	houseArea = houseLength * houseWidth;

	lawnArea = lotArea - houseArea;

	printf("The lawn area is %f square feet.\n", lawnArea);
	std::cout << "Enter the mowing rate, in square feet per second: ";
	std::cin >> mowRate;
	mowTime = lawnArea / mowRate;

	s = (int) ceil(mowTime);
	m = s/60;
	s %= 60;
	h = m/60;
	m %= 60;
	printf("The mowing time is %d hour %d minute %d second\n", h, m, s);

}