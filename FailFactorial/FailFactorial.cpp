#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Circle.h"


using namespace std;
int main() {
    vector<Shape*> shapes = {}; //initialized vector

    Circle* c = new Circle(1.0f); // made pointer 
    (*c).SetRadius(3.0f); // depointerized c
    Rectangle* r = new Rectangle(4.0f, 5.0f); // added missin semicolon
    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++) // fixed loop iterating past end of vector
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        // TODO: If shape is a circle, print radius [done]
        if (typeid(*shapes[i]) == typeid(Circle))
        {
            Circle* circ = static_cast<Circle*>(shapes[i]);
            cout << "Radius: " << (*circ).GetRadius() << endl;
        }
    }

    _CrtDumpMemoryLeaks(); // added dumpmemoryleaks
    return 0;
}
