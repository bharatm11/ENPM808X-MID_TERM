/**
* @file OpenList.hpp
* @author  Royneal Rayess,Bharat Mathur
* @date 14 Oct 2018
* @copyright 2018  Royneal Rayess, Bharat Mathur
* @brief This class cpp file defines data members and methods applicable for class OpenList
* for the A* path planning algorithm
*/

#ifndef ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_OPENLIST_HPP_
#define ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_OPENLIST_HPP_


#include <iostream>
#include <vector>
#include "lib.hpp"
#include "Lists.hpp"

/**
* @brief       Class for OpenList. This is a child class of class Lists
*/
class OpenList : public Lists {
 private:
  std::vector<Node> open_list_;
 public:
  /**
  * @brief Class constructor for OpenList object
  */
  OpenList();

  /**
  * @brief Checks if a node is present in the given list
  * @param [in] list (OpenList or ClosedList) is the list in which node is to be checked
  * @param [in] id is the ID of the node whose presence needs to be checked
  * @return true is node with node ID "id" is present in the list
  */
  bool InList(const std::vector<Node>& list, const int& id);

  /**
  * @brief Returns the node ID of the node with the lowest total cost
  * @param [in] list (OpenList or ClosedList) is the list in which node is to be checked
  * @return ID of the node with the lowest total cost
  */
  std::vector<Node>::size_type IsLowestF(std::vector<Node>& list);
};
#endif  //  ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_OPENLIST_HPP_
