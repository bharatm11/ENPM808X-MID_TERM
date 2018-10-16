/**
* @file ClosedList.hpp
* @author  Royneal Rayess,Bharat Mathur
* @date 14 Oct 2018
* @copyright 2018  Royneal Rayess, Bharat Mathur
* @brief This class cpp file defines data members and methods applicable for class ClosedList
* for the A* path planning algorithm
*/


#ifndef ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_CLOSEDLIST_HPP_
#define ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_CLOSEDLIST_HPP_

#include <vector>
#include "lib.hpp"
#include "Lists.hpp"

/**
* @brief       Class for ClosedList. This is a child class of class Lists
*/
class ClosedList : public Lists {
 private:
  std::vector<Node> closed_list_;
 public:
  /**
  * @brief Class constructor for ClosedList object
  */
  ClosedList();

  /**
  * @brief Checks if a node is present in the given list
  * @param [in] list (OpenList or ClosedList) is the list in which node is to be checked
  * @param [in] id is the ID of the node whose presence needs to be checked
  * @return true is node with node ID "id" is present in the list
  */
  bool NotInList(const std::vector<Node>& list, const int& id);
};
#endif  //  ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_CLOSEDLIST_HPP_
