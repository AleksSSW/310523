#include "Food.h"

Food::Food(std::string name, float price, float weight)
{
	_name = name;
	_price = price;
	_weight = weight;
	_condition = 100.0f;
}

Bread::Bread(std::string name, float price, float weight, std::string type) :Food(name, price, weight)
{
	_typeofBread = type;
}

Milk::Milk(std::string name, float price, float weight, int fat) :Food(name, price, weight)
{
	_fatPercent = fat;
}

void Food::ShowData() {
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Condition: " << _condition << std::endl;
	std::cout << "Price: " << _price << std::endl;
	std::cout << "Weight: " << _weight << std::endl;
}

void Bread::ShowData()
{
	Food::ShowData(); //что бы не переписывать верхнюю реализацию showdata  мы пишем так
	std::cout << "Type of bread: " << _typeofBread << std::endl;
}
void Milk::ShowData()
{
	Food::ShowData(); //что бы не переписывать верхнюю реализацию showdata  мы пишем так
	std::cout << "Type of milk: " << _fatPercent << std::endl;
}
