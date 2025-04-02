#include <iostream>
#include "Person.h"

using namespace std;
Person person;
int main()
{
    const float TAX = 0.1f;
    cout << "Please provide name:\n";
    cin >> person.name;

    cout << "\nLast initial:\n";
    cin >> person.initial;

    cout << "\nAge:\n";
    cin >> person.age;
    person.isAdult = (person.age >= 18);

    cout << "\nPostal code:\n";
    cin >> person.zipcode;

    cout << "\nHourly wage:\n";
    cin >> person.wage;

    cout << "\nDays of work (max 7):\n";
    cin >> person.daysWorked;

    float totalHours = 0;
    for (int i = 0; i < person.daysWorked; i++)
    {
        cout << "Hours worked on day " << (i + 1) << ":";
        cin >> person.hoursPerDay[i];

        totalHours += person.hoursPerDay[i];
    }

    float grossIncome = totalHours * person.wage;
    float taxAmount = grossIncome * TAX;
    float netIncome = grossIncome - taxAmount;

    cout << "\nPayroll Summary\n";
    cout << "-------------------------\n";
    cout << "Name: " << person.name << " " << person.initial << ".\n";
    cout << "Age: " << person.age << " (Is Adult: " << (person.isAdult ? "Yes" : "No") << ")\n";
    cout << "Postal: " << person.zipcode << "\n";
    cout << "Wage: $" << person.wage << "/hr\n";
    cout << "Gross: $" << grossIncome << "\n";
    cout << "Tax: $" << taxAmount << "\n";
    cout << "Net Income: $" << netIncome << "\n";
}
