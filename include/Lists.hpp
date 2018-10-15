/**
 * @file Lists.hpp
 * @author  Royneal Rayess, Bharat Mathur
 * @date 13 Oct 2018
 * @copyright 2018  Royneal Rayess, Bharat Mathur
 * @brief This file defines the methods for class "Lists"
 * This class node contains data members and methods applicable
 * for the A* path planning algorithm
 */

#ifndef INCLUDE_LISTS_HPP_
#define INCLUDE_LISTS_HPP_

#include <node.hpp>
#include <vector>
using std::vector;
class Lists {
 public:
  void Add(vector<Node>& list, Node node);
  void Remove(vector<Node>& list, vector<Node>::iterator iter);
  void SortList(vector<Node>& list);
  static bool CompareNode(Node &node1, Node &node2);
};



#endif
