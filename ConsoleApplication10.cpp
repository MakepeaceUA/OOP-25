#include <iostream>
#include <string>
using namespace std;

class Transport
{
protected:
    string name;
    int kg;
public:
    Transport() = default;
    Transport(string n, int k)
    {
        name = n;
        kg = k;
    }

    virtual void Output() = 0;
    virtual void Input() = 0;
    virtual int GetCost() = 0;
    virtual void SetCost() = 0;
    virtual void Fuel() = 0;
    virtual void Capacity() = 0;
    virtual void Places() = 0;
};

class Car : public Transport
{
    string color;
    int cost;
    int fuel;
    int capacity;
    int places;
public:
    Car(string n, int k, string c,int cost_val,int fl_val,int cap_val,int pls_val) : Transport(n, k) 
    {
        color = c;
        cost = cost_val;
        fuel = fl_val;
        capacity = cap_val;
        places = pls_val;
    }

    void Output() override
    {
        cout << "Name: " << name << "\n";
        cout << "Kg: " << kg << "\n";
        cout << "Color: " << color << "\n";
        cout << "Cost: " << cost << "\n";
        cout << "Fuel: " << fuel << "\n";
        cout << "Capacity: " << capacity << "\n";
        cout << "Places: " << places << "\n";
    }

    void Input() override
    {
        cout << "Name: "; cin >> name;
        cout << "Kg: "; cin >> kg;
        cout << "Color: "; cin >> color;
        cout << "Cost: "; cin >> cost;
        cout << "Fuel: "; cin >> fuel;
        cout << "Capacity: "; cin >> capacity;
        cout << "Places: "; cin >> places;
    }

    int GetCost() override
    {
        return cost;
    }

    void SetCost() override
    {
        cout << "Enter cost car:";
        cin >> cost;
    }

    void Fuel() override
    {
        cout << "Car fuel consumption: " << fuel;
    }

    void Capacity() override
    {
        cout << "Car capacity: " << capacity;
    }

    void Places() override
    {
        cout << "Places in car: " << places;
    }
};



class Bike : public Transport
{
    string color;
    int cost;
    int fuel;
    int capacity;
    int places;
public:
    Bike(string n, int k, string c, int cost_val, int fl_val, int cap_val, int pls_val) : Transport(n, k)
    {
        color = c;
        cost = cost_val;
        fuel = fl_val;
        capacity = cap_val;
        places = pls_val;
    }

    void Output() override
    {
        cout << "Name: " << name << "\n";
        cout << "Kg: " << kg << "\n";
        cout << "Color: " << color << "\n";
        cout << "Cost: " << cost << "\n";
        cout << "Fuel: " << fuel << "\n";
        cout << "Capacity: " << capacity << "\n";
        cout << "Places: " << places << "\n";
    }

    void Input() override
    {
        cout << "Name: "; cin >> name;
        cout << "Kg: "; cin >> kg;
        cout << "Color: "; cin >> color;
        cout << "Cost: "; cin >> cost;
        cout << "Fuel: "; cin >> fuel;
        cout << "Capacity: "; cin >> capacity;
        cout << "Places: "; cin >> places;
    }

    int GetCost() override
    {
        return cost;
    }

    void SetCost() override
    {
        cout << "Enter cost bike:";
        cin >> cost;
    }

    void Fuel() override
    {
        cout << "Bike fuel consumption: " << fuel;
    }

    void Capacity() override
    {
        cout << "Bike capacity: " << capacity;
    }

    void Places() override
    {
        cout << "Places in bike: " << places;
    }
};


class Airplane : public Transport
{
    string color;
    int cost;
    int fuel;
    int capacity;
    int places;
public:
    Airplane(string n, int k, string c, int cost_val, int fl_val, int cap_val, int pls_val) : Transport(n, k)
    {
        color = c;
        cost = cost_val;
        fuel = fl_val;
        capacity = cap_val;
        places = pls_val;
    }

    void Output() override
    {
        cout << "Name: " << name << "\n";
        cout << "Kg: " << kg << "\n";
        cout << "Color: " << color << "\n";
        cout << "Cost: " << cost << "\n";
        cout << "Fuel: " << fuel << "\n";
        cout << "Capacity: " << capacity << "\n";
        cout << "Places: " << places << "\n";
    }

    void Input() override
    {
        cout << "Name: "; cin >> name;
        cout << "Kg: "; cin >> kg;
        cout << "Color: "; cin >> color;
        cout << "Cost: "; cin >> cost;
        cout << "Fuel: "; cin >> fuel;
        cout << "Capacity: "; cin >> capacity;
        cout << "Places: "; cin >> places;
    }

    int GetCost() override
    {
        return cost;
    }

    void SetCost() override
    {
        cout << "Enter cost airplane:";
        cin >> cost;
    }

    void Fuel() override
    {
        cout << "Airplane fuel consumption: " << fuel;
    }

    void Capacity() override
    {
        cout << "Airplane capacity: " << capacity;
    }

    void Places() override
    {
        cout << "Places in airplane: " << places;
    }
};



int main()
{
    Transport* obj[3];

    obj[0] = new Car ("Car", 4500, "Red", 30000,800,100,4);
    obj[1] = new Bike("Bike", 1500, "Black", 5000, 400, 40, 2);
    obj[2] = new Airplane("Airplane", 10000, "White", 10000, 1000, 500, 50);

    for (int i = 0;i < 3;i++) 
    {
         obj[i]->Output();
         delete obj[i];
    }
}
