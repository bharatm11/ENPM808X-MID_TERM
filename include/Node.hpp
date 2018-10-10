/**
* @file Node.hpp
* @author Bharat Mathur, Royneal Rayess
* @date 10 Oct 2018
* @copyright 2018 Bharat Mathur, Royneal Rayess
* @brief This file defines the methods for class "node"
* This class node contains data members and methods applicable
* for the A* path planning algorithm
*/

#ifndef INCLUDE_NODE_HPP_
#define INCLUDE_NODE_HPP_

#include<iostream>
struct Location {
  int x=0;
  int y=0;

}

class Node {
private:
  double F=0;
  double G=0;
  double H=0;
  Location location;
  int parent;

public:
  /**
  * @brief Constric
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */


}
