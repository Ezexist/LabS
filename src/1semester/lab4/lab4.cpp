

#include <iostream>

const double pi = 3.14;


int option(char input, int rad)
{
	switch (input)
	{
	case 'l':
		std::cout << "circumference, formula(2piR) =  " << 2 * pi * rad << std::endl;
		break;
	case 's':
		std::cout << "square,  formula(piR^2) =  " << pi * rad * rad << std::endl;
		break;
	case 'v':
		std::cout << "volume, formula(4/3Pi R^3) =  " << 4 / 3 * pi * rad * rad * rad << std::endl;
		break;
	default:
		std::cout << "unknown value" << std::endl;
	}
	return input;
}

int calculation()
{
	std::cout << "Enter radius" << '\n';
	int rad;
	std::cin >> rad;
	std::cout << "to find:\n l - circumference` \n s - square \n v - volume \n ";
	char input;
	std::cin >> input;
	return option(input, rad);
}




int main()
{
	calculation();
	return 0;
}
