/**
 * @file Lists.cpp
 * @author  Royneal Rayess,
 * @date 14 Oct 2018
 * @copyright 2018  Royneal Rayess,
 * @brief This file defines the methods for class "Lists"
 * This class List is a base class from which OpenList and ClosedList inherit methods
 */

#include "lib.hpp"

void Lists::Add(std::vector<Node>& list, Node node) {
  list.push_back(node);
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Lists::Remove(std::vector<Node>& list, std::vector<Node>::iterator iter) {
  list.erase(iter);
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
bool Lists::CompareNode(Node &node1, Node &node2) {
  return node1.GetF() > node2.GetF();
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Lists::SortList(std::vector<Node>& list) {
  std::sort(list.begin(), list.end(), CompareNode);

}
