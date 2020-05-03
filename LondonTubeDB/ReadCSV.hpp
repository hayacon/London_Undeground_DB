//
//  ReadCSV.hpp
//  LondonTubeDB
//
//  Created by Hayato Conrad Ishida on 5/3/20.
//  Copyright © 2020 Hayato Conrad Ishida. All rights reserved.
//

#pragma once
#ifndef ReadCSV_hpp
#define ReadCSV_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "StationInfo.hpp"

#endif /* ReadCSV_hpp */

class ReadCSV
{
public:
    ReadCSV();
    static std::vector<StationInfo> readCSV(std::string csvFileName);

private:
    static std::vector<std::string> tokenise(std::string csvLine, char separator);
    static StationInfo stringsToStations(std::vector<std::string> strings);
};

