//
//  LondonTube.hpp
//  LondonTubeDB
//
//  Created by Hayato Conrad Ishida on 5/3/20.
//  Copyright © 2020 Hayato Conrad Ishida. All rights reserved.
//

#pragma once
#ifndef LondonTube_hpp
#define LondonTube_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "StationInfo.hpp"

#endif /* LondonTube_hpp */

class LondonTube
{
        public:
            LondonTube();
            void init();

        private:
            void loadDataBook();
            void zoneSearch();

            std::vector<StationInfo> stations;

};
