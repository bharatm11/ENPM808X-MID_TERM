/**
* @file Map.cpp
* @author Joe Bloggs
* @date 15 Oct 2018
* @copyright 2018 Joe Bloggs
* @brief <brief>
*/
#include <iostream>
#include "lib.hpp"

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

void Map::UpdateMap(Location location, std::vector<std::vector<int>> map){
  map[location.x][location.y]=2;
  Map::map_=map;
}

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

bool Map::IsOccupied(Location location) {
  if (this->map_[location.x][location.y] == 0) {
    return true;
  }
  else{
    return false;
  }

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

/*
void Map::DrawMap() {
ofstream img ("picture.ppm");
img<<"P6"<<endl;
img<<Map::map_.size()<<" "<<Map::map_.size()<<endl;
img<<"Map::map_[0].size()"<<endl;
for(int i=0;i<Map::map_.size();i++){
for(int j=0;i<Map::map_[0].size();j++){
int r = Map_map_[i][j];
int g =0;
int b=0;
img<<r<<" "<<g<<" "<< b << std::endl;

}
}
system("open picture.ppm");

}*/
