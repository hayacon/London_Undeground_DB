//
//  StationInfo.cpp
//  LondonTubeDB
//
//  Created by Hayato Conrad Ishida on 5/3/20.
//  Copyright © 2020 Hayato Conrad Ishida. All rights reserved.
//

#include "StationInfo.hpp"


StationInfo::StationInfo(int _id,
                         std::string _stationname,
                         int _zone,
                         int _totalline)
:id(_id),
stationname(_stationname),
zone(_zone),
totalline(_totalline)
{
    
}
