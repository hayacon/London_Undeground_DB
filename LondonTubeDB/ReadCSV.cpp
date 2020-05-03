//
//  ReadCSV.cpp
//  LondonTubeDB
//
//  Created by Hayato Conrad Ishida on 5/3/20.
//  Copyright © 2020 Hayato Conrad Ishida. All rights reserved.
//

#include "ReadCSV.hpp"
#include <vector>
#include <iostream>
#include <fstream>


ReadCSV::ReadCSV()
{

}

std::vector<StationInfo> ReadCSV::readCSV(std::string csvFileName)
{
    std::vector<StationInfo> entries;

    std::ifstream csvFile{csvFileName};
    std::string line;
    if(csvFile.is_open())
    {
//        std::cout<<"File is now open..... press enter to continue..." << std::endl;
//        std::cin.ignore();

        while(std::getline(csvFile, line)){
            try{
                StationInfo st = stringsToStations(tokenise(line, ','));
                entries.push_back(st);
            }catch(const std::exception& e){
                std::cout << "ReadCSV::readCSV bad data" << std::endl;
            }
        } //end of while
    }

//    std::cout<<"ReadCSV::readCSV read " << entries.size() << " stations" << std::endl;

    return entries;
}

std::vector<std::string> ReadCSV::tokenise(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;
    signed int start, end;
    std::string token;

    start = csvLine.find_first_not_of(separator, 0);

    do{
        end = csvLine.find_first_of(separator, start);
        if(start == csvLine.length() || start == end) break;
        if(end >= 0) token = csvLine.substr(start, end - start);
        else token = csvLine.substr(start, csvLine.length() - start);
        tokens.push_back(token);
        start = end + 1;
    }while (end > 0);
    
    return tokens;
}

StationInfo ReadCSV::stringsToStations(std::vector<std::string> tokens)
{
    int id, zone, totalline;
    std::string stationname;

    if(tokens.size() != 4)
    {
        std::cout<< "Bad line" << std::endl;
        throw std::exception{};
    }

    try{
        id = std::stoi(tokens[0]);
        zone = std::stoi(tokens[2]);
        totalline = std::stoi(tokens[3]);
        stationname = tokens[1];
        for(int i = 0; i < stationname.size(); ++i)
        {
            stationname[i] = std::tolower(stationname[i]);
        }

    }catch(std::exception& e){
        std::cout<<"Bad integer"<< tokens[0] <<std::endl;
        std::cout<<"Station doesn't exist" << stationname << std::endl;
        std::cout<<"Bad integer"<< tokens[2] <<std::endl;
        std::cout<<"Bad integer"<< tokens[3] <<std::endl;
        throw;
    }

    for (std::string& t : tokens){
          std::cout<< t << std::endl;
      };

    StationInfo st{id, stationname, zone, totalline};

    return st;
}
