/**
* @file Map.hpp
* @author Bharat Mathur, Royneal Rayess
* @date 10 Oct 2018
* @copyright 2018 Bharat Mathur, Royneal Rayess
* @brief This file defines the methods for class "Map"
* This class cpp file defines data members and methods applicable for class Map
* for the A* path planning algorithm
*/

#ifndef INCLUDE_MAP_HPP_
#define INCLUDE_MAP_HPP_

#include <iostream>
#include <vector>
#include "Node.hpp"
#include <fstream>


/**
* @brief      Class for Map
*/
class Map {
 private:
  std::vector<std::vector<int>> map_ ;

 public:

  /**
  * @brief Reads the original map from main file
  * @param [in] map is the map of the robot's world as a 2d vector
  * @return returns the map of the world as a 2d vector
  */
  std::vector<std::vector<int>> ReadMap(std::vector<std::vector<int>> map);


  /**
  * @brief Updates the map to keep track of visited nodes
  * @param [in] map is the current map of the robot's world as a 2d vector
  * @param [in] location is the location of the node that needs to be updated
  * @return returns the updated map of the world as a 2d vector
  */
  std::vector<std::vector<int>> UpdateMap(Location location, std::vector<std::vector<int>> map);

  /**
  * @brief Draws the figure of the map
  * @param [in] map is the current map of the robot's world as a 2d vector
  */
  void DrawMap(std::vector<std::vector<int>> map);

  /**
  * @brief Checks if a node is occupied by an obstacle
  * @param [in] location is the location of the node that needs to be checked
  * @return returns true if node is occupied
  */
  bool IsOccupied(Location location);
};
#endif
