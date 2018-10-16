/**
* @file Lists.hpp
* @author  Royneal Rayess,Bharat Mathur
* @date 13 Oct 2018
* @copyright 2018  Royneal Rayess, Bharat Mathur
* @brief This class cpp file defines data members and methods applicable for class List
* for the A* path planning algorithm
*/


#ifndef INCLUDE_LISTS_HPP_
#define INCLUDE_LISTS_HPP_

#include "lib.hpp"

/**
* @brief      Parent Class for Lists
*/
class Lists {
 public:
  /**
  * @brief Adds a node to the list given as input
  * @param [in] list (OpenList or ClosedList) is the list to which node is added
  * @param [in] node is the node on the map that has to be added
  */
  void Add(std::vector<Node>& list, Node node);

  /**
  * @brief Removes a node from the list given as input
  * @param [in] list (OpenList or ClosedList) is the list from which node is to be removed
  * @param [in] node is the node on the map that has to be removed
  */
  void Remove(std::vector<Node>& list, std::vector<Node>::iterator iter);

  /**
  * @brief Sorts the lists in descending order of total cost
  * @param [in] list (OpenList or ClosedList) is the list that has to be sorted
  */
  void SortList(std::vector<Node>& list);

  /**
  * @brief Compares the total costs of 2 nodes
  * @param [in] node 1 is the first node for comparison
  * @param [in] node 2 is the second node for comparison
  * @return true if cost of node1 is greater than node2
  */
  static bool CompareNode(Node &node1, Node &node2);
};
#endif  //  INCLUDE_LISTS_HPP_
