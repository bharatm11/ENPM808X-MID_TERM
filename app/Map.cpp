/**
* @file Map.cpp
* @author Joe Bloggs
* @date 15 Oct 2018
* @copyright 2018 Joe Bloggs
* @brief <brief>
*/

#include <iostream>
#include <vector>
#include "Map.hpp"
#include "Node.hpp"

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

std::vector<std::vector<int>> Map::ReadMap(std::vector<std::vector<int>> map){
  Map::map_=map;

  return Map::map_;
}

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

std::vector<std::vector<int>> Map::UpdateMap(Location location, std::vector<std::vector<int>> map){
  map[location.x][location.y]=2;
  Map::map_=map;
  return Map::map_;
}

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

bool IsOccupied(Location location, std::vector<std::vector<int>> map){
  if(map[location.x][location.y]==0){
    return true;
  }
  else{
    return false;
  }


}
