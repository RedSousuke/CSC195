#include "Declarations.h"

float Sandwich::GetPrice()
{
	return price;
}

void Sandwich::PriceUpdate(float newPrice)
{
	price = newPrice;
}