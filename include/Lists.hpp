/**
 * @file Lists.hpp
 * @author  Royneal Rayess,
 * @date 13 Oct 2018
 * @copyright 2018  Royneal Rayess,
 * @brief This file defines the methods for class "Lists"
 * This class Lists contains data members and methods applicable
 * for the A* path planning algorithm
 */

#ifndef INCLUDE_LISTS_HPP_
#define INCLUDE_LISTS_HPP_

#include "lib.hpp"

class Lists {
 public:
  void Add(std::vector<Node>& list, Node node);
  void Remove(std::vector<Node>& list, std::vector<Node>::iterator iter);
  void SortList(std::vector<Node>& list);
  static bool CompareNode(Node &node1, Node &node2);
};



#endif
