/**
* @file Map.hh
* @author Bharat Mathur
* @date 15 Oct 2018
* @copyright 2018 Bharat Mathur
* @brief This class Map contains data members and methods applicable
* to generate a map for the A* path planning algorithm
*/

#ifndef INCLUDE_MAP_HPP_
#define INCLUDE_MAP_HPP_

#include <iostream>
#include <vector>
#include "Node.hpp"
#include <fstream>

class Map {
private:
  std::vector<std::vector<int>> map_ ;

public:

  /**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

  std::vector<std::vector<int>> ReadMap(std::vector<std::vector<int>> map);

  /**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

void UpdateMap(Location location, std::vector<std::vector<int>> map);

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

void DrawMap(std::vector<std::vector<int>> map);

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

bool IsOccupied(Location location);

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

void DrawMap();

};
#endif
