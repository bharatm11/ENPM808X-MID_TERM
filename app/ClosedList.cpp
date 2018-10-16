/**
 * @file ClosedList.cpp
 * @author  Royneal Rayess,
 * @date 14 Oct 2018
 * @copyright 2018  Royneal Rayess,
 * @brief This file defines the methods for class "ClosedLists"
 * This class ClosedList contains data members and methods applicable
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
ClosedList::ClosedList() {

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
bool ClosedList::NotInList(const std::vector<Node>& list, const int& id) {
  std::vector<Node>::size_type i = 0;
  Node node_to_check;
  bool flag = true;

  while (i != list.size()) {
    node_to_check = list.at(i);
    if (node_to_check.GetId() == id) {
      flag = false;
      break;
    } else
      i++;
  }

  return flag;
}
