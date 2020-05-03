//
//  LondonTube.cpp
//  LondonTubeDB
//
//  Created by Hayato Conrad Ishida on 5/3/20.
//  Copyright © 2020 Hayato Conrad Ishida. All rights reserved.
//

#include "LondonTube.hpp"
#include "ReadCSV.hpp"

LondonTube::LondonTube()
{

}

void LondonTube::init()
{
    loadDataBook();
    zoneSearch();
}

void LondonTube::loadDataBook()
{
    stations = ReadCSV::readCSV("stations.csv");
}

void LondonTube::zoneSearch()
{
    std::string nameInput;
    std::cout<<"Enter the station name => " << std::endl;
    std::getline(std::cin, nameInput);
    for(int i = 0; i < nameInput.size(); ++i){
        nameInput[i] = std::tolower(nameInput[i]);
    }
    std::cout<<"User input "<< nameInput << std::endl;
    for(StationInfo& s : stations)
    {
        if(nameInput == s.stationname)
        {
            std::cout<< nameInput << " is in ZONE " << s.zone << std::endl;
        }
    }
}

