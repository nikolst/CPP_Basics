#include<iostream>
#include<cstring>


//define the structure Planet
struct Planet
{
    char name[30];
    double sunDistance;
    double d; // diameter
    double mass;
};

//input the planet characteristics
void inputPlanet(Planet& p)
{
    std::cout << "Enter the name of the planet: ";
    std::cin >> p.name;
    std::cout << "Enter the distance form the Sun: ";
    std::cin >> p.sunDistance;
    std::cout << "Enter the diameter of the planet: ";
    std::cin >> p.d;
    std::cout << "Enter the mass of the planet: ";
    std::cin >> p.mass;
}

//output the planet characteristics
void outputPlanet(Planet& p)
{
    std::cout << p.name << " " << p.sunDistance << " " << p.d << " " << p.mass << std::endl;
}

//output the seconds that the light needs to reach the planet from the sun
double seconds(Planet& p)
{
    return (p.sunDistance / 299792) / 3600;
}

int main()
{
    Planet p;
    //a)
    inputPlanet(p);
    //b)
    outputPlanet(p);
    //c)
    std::cout << "It takes " << seconds(p) << " seconds to the light to reach the planet " << p.name << std::endl;

    //A)
    int n;
    std::cout << "Enter the number of planets you are going to initialize: ";
    std::cin >> n; // the number of planets we are going to create

    Planet pl[n];
  
    for (int i = 0; i < n; i++)
    {
        inputPlanet(pl[i]);
    }

    //Б)
    for (int i = 0; i < n; i++)
    {
        outputPlanet(pl[i]);
    }

    //B)
    double maxD = pl[0].d;
    char plName[30];
    for (int i = 0; i < n; i++)
    {
        if (pl[i].d > maxD) 
        {
            maxD = pl[i].d;
            strcpy(plName, pl[i].name);
        }
    }
    std::cout << "The planet with Max diameter is " << plName << std::endl;

    //Г)
    double minMass = pl[0].mass;
    for (int i = 0; i < n; i++)
    {
        if (pl[i]. mass < minMass) 
        {
            minMass = pl[i].mass;
            strcpy(plName, pl[i].name);
        }
    }
    std::cout << "The planet with Min mass is " << plName << std::endl;

    //Д)
    double maxSeconds = seconds(pl[0]);
    for (int i = 0; i < n; i++)
    {
        if (seconds(pl[i]) > maxSeconds) 
        {
            maxSeconds = seconds(pl[i]);
            strcpy(plName, pl[i].name);
        }
    }
    std::cout << "The planet, which is far away from the sun is " << plName << std::endl;

    return 0;
}
