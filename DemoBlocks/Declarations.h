#pragma once

enum Meat
{
    Steak,
    Chicken,
    Pork
};

class Sandwich
{
public:
    Meat meat;
    bool toast;
    void PriceUpdate(float newPrice);
    float GetPrice();
private:
    float price;

};