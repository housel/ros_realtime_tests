/**
* Copyright (C) 2014, BMW Car IT GmbH
* Author: Jonas Sticha (Jonas.Sticha@bmw-carit.de)
*
* This software is licensed under BSD 3-clause License
* (see http://spdx.org/licenses/BSD-3-Clause).
**/

#include "Config.h"
#include <sstream>

Config* Config::configInstance = 0;

Config::Config() : nodeHandle(0), pubFrequency(0), amountMessages(0)
{
}

std::string Config::getFilename()
{
	std::stringstream filename;
	filename << "ct_gnuplot_l" << amountMessages << "_fq" << pubFrequency;
	return filename.str();
}

Config* Config::getConfig()
{
	if(configInstance == 0)
	{
		configInstance = new Config();
	}
	return configInstance;
}
