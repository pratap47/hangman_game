//
//  Files.h
//  OOPS Project
//
//  Created by Amir on 11/11/18.
//  Copyright © 2018 Amir. All rights reserved.
//

#ifndef Files_h
#define Files_h


#endif /* Files_h */
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
void create_cars()
{
    ofstream fwrite;
    fwrite.open("cars_ans.txt");
    fwrite<<"AUDI\n";
    fwrite<<"BUGATTI\n";
    fwrite<<"LAMBORGHINI\n";
    fwrite<<"MCLAREN\n";
    fwrite<<"FERRARI\n";
    fwrite<<"PORSCHE\n";
    fwrite<<"KOENIGSEGG\n";
    fwrite<<"PAGANI\n";
    fwrite<<"FORD\n";
    fwrite<<"BMW\n";
    fwrite.close();
    fwrite.open("cars_hint.txt");
    fwrite<<"This car was founded on 16th of July, 1909 in Zwickau, Germany.\n";
    fwrite<<"This car was founded on 1909 in Molsheim, France.\n";
    fwrite<<"This car was founded on May 1963 in Sant'Agata Bolognese, Italy.\n";
    fwrite<<"This car was founded on 2 September, 1963 in Britain.\n";
    fwrite<<"This car was founded on 1947, Maranello in Italy.\n";
    fwrite<<"This car was founded on 25th of April, 1931 in Stuttgart, Germany.\n";
    fwrite<<"This car was founded on 1994 in Sweden.\n";
    fwrite<<"This car was founded on 1992 in San Cesario sul Panaro, Italy.\n";
    fwrite<<"This car was founded on 16th of June, 1903 in Detroit, Michigan, United States.\n";
    fwrite<<"This car was founded on 7th of March, 1916 in Munich, Germany.\n";
    fwrite.close();
}
void create_animals()
{
    ofstream fwrite;
    fwrite.open("animals_ans.txt");
    fwrite<<"TIGER\n";
    fwrite<<"GORILLA\n";
    fwrite<<"LION\n";
    fwrite<<"FOX\n";
    fwrite<<"SQUIRREL\n";
    fwrite<<"RHINO\n";
    fwrite<<"ELEPHANT\n";
    fwrite<<"HIPPOPOTAMUS\n";
    fwrite<<"HORSE\n";
    fwrite<<"GOAT\n";
    fwrite.close();
    fwrite.open("animals_hint.txt");
    fwrite<<"This is the largest cat species in the world.\n";
    fwrite<<"These are the largest apes that are native to Africa.\n";
    fwrite<<"They are the most social of all big cats and live together in groups or \"prides\".\n";
    fwrite<<"They can use the Earth\'s magnetic field.\n";
    fwrite<<"They can find food buried beneath a foot of snow.\n";
    fwrite<<"They are known for their awesome, giant horns.\n";
    fwrite<<"They are the largest land animals on Earth.\n";
    fwrite<<"The name comes from the Ancient Greek \'river horse\'.\n";
    fwrite<<"They can sleep both lying down and standing up.\n";
    fwrite<<"Their meat is the most consumed meat per capita worldwide.\n";
    fwrite.close();
}
void create_countries()
{
    ofstream fwrite;
    fwrite.open("countries_ans.txt");
    fwrite<<"INDIA\n";
    fwrite<<"UKRAINE\n";
    fwrite<<"JAPAN\n";
    fwrite<<"CHINA\n";
    fwrite<<"SINGAPORE\n";
    fwrite<<"SYRIA\n";
    fwrite<<"CANADA\n";
    fwrite<<"GREECE\n";
    fwrite<<"MALAYSIA\n";
    fwrite<<"GERMANY\n";
    fwrite.close();
    fwrite.open("countries_hint.txt");
    fwrite<<"It is the world\'s largest democracy.\n";
    fwrite<<"It is at the heart of Europe.\n";
    fwrite<<"It has the most vending machines in the world.\n";
    fwrite<<"Put together, all of its railways lines could loop around earth twice.\n";
    fwrite<<"It has a total land area of only 682.7 square kilometers.\n";
    fwrite<<"It is the founding member of the United Nations.\n";
    fwrite<<"It is home to the longest street in the world.\n";
    fwrite<<"It is often considered to be the world\'s first democracy.\n";
    fwrite<<"It\'s a jungle at the airport.\n";
    fwrite<<"It is the world\'s first country in the world to adopt Daylight saving time.\n";
    fwrite.close();
    
}
void create_movies()
{
    ofstream fwrite;
    fwrite.open("movies_ans.txt");
    fwrite<<"SPIDERMAN\n";
    fwrite<<"TERMINATOR\n";
    fwrite<<"GHOSTBUSTERS\n";
    fwrite<<"BATMAN\n";
    fwrite<<"DEADPOOL\n";
    fwrite<<"HANGOVER\n";
    fwrite<<"DRACULA\n";
    fwrite<<"GODFATHER\n";
    fwrite<<"GRAVITY\n";
    fwrite<<"AVENGERS\n";
    fwrite.close();
    fwrite.open("movies_hint.txt");
    fwrite<<"It took 17 years to get it made.\n";
    fwrite<<"It all started with a fever dream.\n";
    fwrite<<"This has to be made in a very short period of time.\n";
    fwrite<<"He is considered the greatest detective in the world.\n";
    fwrite<<"He constantly tries to win Spiderman over as his best friend.\n";
    fwrite<<"Its director is Todd Phillips.\n";
    fwrite<<"He is between 466 and 469 years old.\n";
    fwrite<<"He's cat was a stray.\n";
    fwrite<<"It took four and a half years to make.\n";
    fwrite<<"Featured song : live to rise.\n";
    fwrite.close();
}
void create_brands()
{
    ofstream fwrite;
    fwrite.open("brands_ans.txt");
    fwrite<<"AMAZON\n";
    fwrite<<"BOEING\n";
    fwrite<<"APPLE\n";
    fwrite<<"NIKE\n";
    fwrite<<"HEINZ\n";
    fwrite<<"PIAGGIO\n";
    fwrite<<"PEPSI\n";
    fwrite<<"DISNEY\n";
    fwrite<<"NESTLE\n";
    fwrite<<"MICROSOFT\n";
    fwrite.close();
    fwrite.open("brands_hint.txt");
    fwrite<<"Its logo shows a smile from A to Z.\n";
    fwrite<<"It is known for manufacturing airplanes.\n";
    fwrite<<"Smoking near this brand's product will invalidate your warranty.\n";
    fwrite<<"It was initially named as Blue Ribbon Sports.\n";
    fwrite<<"Their first product was Henry's 'pure and superior' grated horseradish.\n";
    fwrite<<"It produces scooters under Vespa.\n";
    fwrite<<"It was the first soft drink company to use two liter bottles.\n";
    fwrite<<"It produced propaganda films for the U.S. government during WWII.\n";
    fwrite<<"It is the world's largest food company.\n";
    fwrite<<"It's employees are called softies.\n";
    fwrite.close();
}

