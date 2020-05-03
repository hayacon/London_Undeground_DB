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
}

void LondonTube::loadDataBook()
{
    stations = ReadCSV::readCSV("stations.csv");
}


