/**
 * @file OpenList.cpp
 * @author  Royneal Rayess,
 * @date 14 Oct 2018
 * @copyright 2018  Royneal Rayess,
 * @brief This file defines the methods for class "OpenList"
 * This class OpenList contains data members and methods applicable
 * for the A* path planning algorithm
 */
#include <iostream>
#include "lib.hpp"
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_descrifindption>
 * @details <details>
 */
OpenList::OpenList() {

}
/**
 *  @brief Find the first occurrence of a value in a sequence.
 *  @ingroup non_mutating_algorithms
 *  @param  __first  An input iterator.
 *  @param  __last   An input iterator.
 *  @param  __val    The value to find.
 *  @return   The first iterator @c i in the range @p [__first,__last)
 *  such that @c *i == @p __val, or @p __last if no such iterator exists.
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
    }
    else
      i++;
  }
  return flag;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
std::vector<Node>::size_type OpenList::IsLowestF(std::vector<Node>& list) {
  std::vector<Node>::size_type i = list.size() - 1;
  std::vector<Node>::size_type lowest_f = list.size() - 1;

  this->SortList(list);  //sort according to F value in decending order

  /* TODO! Clean
  std::cout << "size: " << list.size() << std::endl;
  for (i = 0; i < list.size(); i++) {
    std::cout << "i: " << i << std::endl;
    std::cout << list.at(i).GetId() << std::endl;
  }
   */

  while (i != 0) {
    //after sorting,scan bottom up for nodes with identical F values
    if (list.at(lowest_f).GetF() == list.at(i).GetF()) {
      // compare and save the node with lowest H
      if (list.at(lowest_f).GetH() > list.at(i).GetH()) {
        //update index of smallest node
        lowest_f = i;

      }
    }
    else
      break;

    i--;
  }
  //find if there are multiple nodes with same f
  //if so find the f with lowest H and return it
  //else return last node.

  return lowest_f;

}
