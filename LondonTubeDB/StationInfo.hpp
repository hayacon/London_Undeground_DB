//
//  StationInfo.hpp
//  LondonTubeDB
//
//  Created by Hayato Conrad Ishida on 5/3/20.
//  Copyright © 2020 Hayato Conrad Ishida. All rights reserved.
//

#pragma once
#ifndef StationInfo_hpp
#define StationInfo_hpp

#include <stdio.h>
#include <string>

#endif /* StationInfo_hpp */

class StationInfo
{
public:

            StationInfo(int _id,
                       std::string _stationname,
                       int _zone,
                       int _totalline);

    int id;
    std::string stationname;
    int zone;
    int totalline;
};
