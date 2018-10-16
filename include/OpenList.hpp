/**
 * @file OpenList.hpp
 * @author Royneal Rayess, Bharat Mathur,
 * @date 14 Oct 2018
 * @copyright 2018 Royneal Rayess, Bharat Mathur
 * @brief This file defines the methods for class "OpenList"
 * This class OpenList contains data members and methods applicable
 * for the A* path planning algorithm
 */

#ifndef INCLUDE_OPENLIST_HPP_
#define INCLUDE_OPENLIST_HPP_
#include <iostream>
#include "lib.hpp"
#include "Lists.hpp"


class OpenList : public Lists {
 private:
  std::vector<Node> open_list_;
 public:
  OpenList();
  bool InList(const std::vector<Node>& list, const int& id);
  std::vector<Node>::size_type IsLowestF(std::vector<Node>& list);

};
#endif
