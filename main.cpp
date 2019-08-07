//  Ch10.PP1 Planet Weight Converter
//
//  Created by Milan Patel on 11/28/18.
//  Copyright © 2018 Milan Patel. All rights reserved.
//

#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>

using namespace std;

enum planetNames{MERCURY, VENUS, EARTH, MOON, MARS, JUPITER, SATURN, URANUS, NEPTUNE, PLUTO};       //declar enum type

//prime functions
planetNames findPlanetName(string str);
double calcWeight(planetNames, double);

int main()
{
    double weight;
    double weightOnPlanet;  //declare variables
    string planetName;
    
    cout << "Planet Names List:\t1. Mercury"
    << "\t2. Venus\t3. Earth\t4. Moon"
    << "\t5. Mars\t6. Jupiter\t7. Saturn"       //display prompt
    << "\t8. Uranus\t9. Neptune"
    << "\t10. Pluto" << endl;
    
    cout << "Enter name of the planet:";
    cin >> planetName;                      //collect data
    cout << "enter your weight:";
    cin >> weight;                          //collect data
    
    weightOnPlanet = calcWeight(findPlanetName(planetName), weight);    //send data to functions
    cout << endl << "Weight on planet " << planetName << " is " << weightOnPlanet << "." << endl;   //display converted values
    
    system("pause");
    return 0;
}

planetNames findPlanetName(string str)
{
    enum planetNames name = EARTH;
    if (str.length() < 4)
    {
        cout << "Invalid planet name..." << endl;
        cout << "Check the spelling Try again" << endl;             //find out if name is correct.  earth is defaukt
        
        system("pause");
        exit(1);
    }
    
    switch (toupper(str.at(0)))     //compare characters to match with planets alphabetically
    {
        case 'M':
            switch (toupper(str.at(1)))
        {
            case'E':
                name = MERCURY;
                break;
            case'A':
                name = MARS;
                break;
            case'O':
                name = MOON;
                break;
            default:
                cout << "invalid planet name..." << endl << "Check the spelling" << "Try again" << endl;
                
                system("pause");
                exit(1);
        }
            break;
        case'V':
            name = VENUS;
            break;
        case'E':
            name = EARTH;
            break;
        case'S':
            name = SATURN;
            break;
        case'U':
            name = URANUS;
            break;
        case'N':
            name = NEPTUNE;
            break;
        case'P':
            name = PLUTO;
            break;
        default:
            cout << "Invalid planet name..." << endl;
            cout << "Check the spelling. Try again." << endl;
            
            system("pause");
            exit(1);
    }
    return name;
}
    double calcWeight(planetNames planet, double weight)
    {
        double weightonPlanet = 0;
        switch (planet)
        {
            case MERCURY:
                weightonPlanet = weight*0.4155;
                break;
            case VENUS:
                weightonPlanet = weight*0.8975;
                break;
            case EARTH:
                weightonPlanet = weight*1.0;
                break;
            case MOON:
                weightonPlanet = weight*0.166;
                break;
            case MARS:
                weightonPlanet = weight*0.3507;
                break;
            case JUPITER:
                weightonPlanet = weight*2.5374;
                break;
            case SATURN:
                weightonPlanet = weight*1.0677;
                break;
            case URANUS:
                weightonPlanet = weight*0.8947;
                break;
            case NEPTUNE:
                weightonPlanet = weight*1.1794;
                break;
            case PLUTO:
                weightonPlanet = weight*0.899;
                break;
        }
        
        return weightonPlanet;
    }

