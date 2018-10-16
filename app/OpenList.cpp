/**
* @file OpenList.hpp
* @author  Royneal Rayess,Bharat Mathur
* @date 14 Oct 2018
* @copyright 2018  Royneal Rayess, Bharat Mathur
* @brief This class cpp file defines data members and methods applicable for class OpenList
* for the A* path planning algorithm
*/

#include <iostream>
#include "lib.hpp"

/**
* @brief Class constructor for OpenList object
*/
OpenList::OpenList() {
}
/**
* @brief Checks if a node is present in the given list
* @param [in] list (OpenList or ClosedList) is the list in which node is to be checked
* @param [in] id is the ID of the node whose presence needs to be checked
* @return true is node with node ID "id" is present in the list
*/
bool OpenList::InList(const std::vector<Node>& list, const int& id) {
  std::vector<Node>::size_type i = 0;
  Node node_to_check;
  bool flag = false;

  while (i != list.size()) {
    node_to_check = list.at(i);
    if (node_to_check.GetId() == id) {
      flag = true;
      break;
    } else {
      i++;
    }
  }
  return flag;
}

/**
* @brief Returns the node ID of the node with the lowest total cost
* @param [in] list (OpenList or ClosedList) is the list in which node is to be checked
* @return ID of the node with the lowest total cost
*/
std::vector<Node>::size_type OpenList::IsLowestF(std::vector<Node>& list) {
  std::vector<Node>::size_type i = list.size() - 1;
  std::vector<Node>::size_type lowest_f = list.size() - 1;

  this->SortList(list);  // sort according to F value in decending order

  /* TODO! Clean
  std::cout << "size: " << list.size() << std::endl;
  for (i = 0; i < list.size(); i++) {
  std::cout << "i: " << i << std::endl;
  std::cout << list.at(i).GetId() << std::endl;
}
*/

while (i != 0) {
  // after sorting,scan bottom up for nodes with identical F values
  if (list.at(lowest_f).GetF() == list.at(i).GetF()) {
    // compare and save the node with lowest H
    if (list.at(lowest_f).GetH() > list.at(i).GetH()) {
      // update index of smallest node
      lowest_f = i;
    }
  } else {
    break;
  }
  i--;
}
// find if there are multiple nodes with same f
// if so find the f with lowest H and return it
// else return last node.
return lowest_f;
}
