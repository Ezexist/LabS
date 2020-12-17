
#include <iostream>


void step4()
{
	int first;
	std::cout << "Veddite chislo,kotoroe preobrazuetsya v 4 stepen`" << std::endl;
	std::cin >> first;
	first = first * first;
	first = first * first;
	std::cout << first << std::endl;
}

void step8()
{
	int first, second;
	std::cout << "Veddite chislo,kotoroe preobrazuetsya v 8 stepen`" << std::endl;
	std::cin >> first;
	second = first * first;
	second = second * second;
	first = second * second;
	std::cout << first << std::endl;
}


void step6()
{
	int first, second, three;
	std::cout << "Veddite chislo,kotoroe preobrazuetsya v 6 stepen`" << std::endl;
	std::cin >> first;
	second = first * first;
	three = second * second;
	first = three * second;
	std::cout << first << std::endl;
}

void step10()
{
	int first, second, three, chetveriy;
	std::cout << "Veddite chislo,kotoroe preobrazuetsya v 10 stepen`" << std::endl;
	std::cin >> first;
	second = first * first;
	three = second * second;
	chetveriy = three * three;
	first = chetveriy * second;
	std::cout << first << std::endl;
}

int main()
{
	step4();
	step6();
	step8();
	step10();
}
