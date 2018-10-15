/*
 * Lists.cpp
 *
 *  Created on: Oct 13, 2018
 *      Author: royneal
 */

#include <Lists.hpp>
#include <Node.hpp>
#include <vector>
#include <algorithm>

using std::vector;
using std::sort;

void Lists::Add(vector<Node>& list, Node node) {
  list.push_back(node);
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Lists::Remove(vector<Node>& list, vector<Node>::iterator iter) {
  list.erase(iter);
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
bool Lists::CompareNode(Node &node1, Node &node2) {
  return node1.GetF() < node2.GetF();
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Lists::SortList(vector<Node>& list) {
  sort(list.begin(), list.end(), CompareNode);

}
