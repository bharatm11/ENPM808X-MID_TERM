/**
 * @file ClosedList.hpp
 * @author Royneal Rayess,
 * @date 14 Oct 2018
 * @copyright 2018 Royneal Rayess,
 * @brief This file defines the methods for class "ClosedList"
 * This class ClosedList contains data members and methods applicable
 * for the A* path planning algorithm
 */

#ifndef INCLUDE_CLOSEDLIST_HPP_
#define INCLUDE_CLOSEDLIST_HPP_

#include "lib.hpp"
#include <Lists.hpp>

class ClosedList : public Lists {
 private:
  std::vector<Node> closed_list_;
 public:
  ClosedList();
  bool NotInList(const std::vector<Node>& list, const int& id);
};
#endif
