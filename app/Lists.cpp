/**
* @file Lists.hpp
* @author  Royneal Rayess,Bharat Mathur
* @date 14 Oct 2018
* @copyright 2018  Royneal Rayess, Bharat Mathur
* @brief This class cpp file implements data members and methods applicable for class List
* for the A* path planning algorithm
*/

#include "lib.hpp"

/**
* @brief Adds a node to the list given as input
* @param [in] list (OpenList or ClosedList) is the list to which node is added
* @param [in] node is the node on the map that has to be added
*/
void Lists::Add(std::vector<Node>& list, Node node) {
  list.push_back(node);
}

/**
* @brief Removes a node from the list given as input
* @param [in] list (OpenList or ClosedList) is the list from which node is to be removed
* @param [in] node is the node on the map that has to be removed
*/
void Lists::Remove(std::vector<Node>& list, std::vector<Node>::iterator iter) {
  list.erase(iter);
}

/**
* @brief Sorts the lists in descending order of total cost
* @param [in] list (OpenList or ClosedList) is the list that has to be sorted
*/
void Lists::SortList(std::vector<Node>& list) {
  std::sort(list.begin(), list.end(), CompareNode);
}

/**
* @brief Compares the total costs of 2 nodes
* @param [in] node 1 is the first node for comparison
* @param [in] node 2 is the second node for comparison
* @return true if cost of node1 is greater than node2
*/
bool Lists::CompareNode(Node &node1, Node &node2) {
  return node1.GetF() > node2.GetF();
}
