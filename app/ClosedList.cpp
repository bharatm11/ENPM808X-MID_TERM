/**
* @file ClosedList.cpp
* @author  Royneal Rayess,Bharat Mathur
* @date 14 Oct 2018
* @copyright 2018  Royneal Rayess, Bharat Mathur
* @brief This class cpp file implements data members and methods applicable for class ClosedList
* for the A* path planning algorithm
*/
#include <iostream>
#include "lib.hpp"


/**
* @brief Class constructor for ClosedList object
*/
ClosedList::ClosedList() {
}

/**
* @brief Checks if a node is present in the given list
* @param [in] list (OpenList or ClosedList) is the list in which node is to be checked
* @param [in] id is the ID of the node whose presence needs to be checked
* @return true is node with node ID "id" is present in the list
*/
bool ClosedList::NotInList(const std::vector<Node>& list, const int& id) {
  std::vector<Node>::size_type i = 0;
  Node node_to_check;
  bool flag = true;

  while (i != list.size()) {
    node_to_check = list.at(i);
    if (node_to_check.GetId() == id) {
      flag = false;
      break;
    } else {
      i++;
    }
  }
  return flag;
}
