/**
* @file Map.hpp
* @author Bharat Mathur, Royneal Rayess
* @date 10 Oct 2018
* @copyright 2018 Bharat Mathur, Royneal Rayess
* @brief This file implements the methods for class "Map"
* This class cpp file implements data members and methods applicable for class Map
* for the A* path planning algorithm
*/
#include <iostream>
#include "lib.hpp"

/**
* @brief Reads the original map from main file
* @param [in] map is the map of the robot's world as a 2d vector
* @return returns the map of the world as a 2d vector
*/
std::vector<std::vector<int>> Map::ReadMap(std::vector<std::vector<int>> map){
  Map::map_=map;

  return Map::map_;
}

/**
* @brief Updates the map to keep track of visited nodes
* @param [in] map is the current map of the robot's world as a 2d vector
* @param [in] location is the location of the node that needs to be updated
* @return returns the updated map of the world as a 2d vector
*/
std::vector<std::vector<int>> Map::UpdateMap(Location location, std::vector<std::vector<int>> map){
  map[location.x][location.y]=2;
  Map::map_=map;
  return Map::map_;
}

/**
* @brief Checks if a node is occupied by an obstacle
* @param [in] location is the location of the node that needs to be checked
* @return returns true if node is occupied
*/
bool Map::IsOccupied(Location location) {
  if (this->map_[location.x][location.y] == 0) {
    return true;
  }
  else{
    return false;
  }
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
