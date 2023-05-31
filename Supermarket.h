#pragma once
#include <vector>
#include "Food.h"

class Supermarket 
{
private:
	std::vector<Food*>_products;
	Food* SearchbyName(std::string name);
public:
	void ShowDataOfProducts();
	
	

	void Buy(std::string name);

	void AddProduct(Food* food);


};
