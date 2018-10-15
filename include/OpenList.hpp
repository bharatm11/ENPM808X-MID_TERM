/**
 * @file Node.hpp
 * @author Royneal Rayess, Bharat Mathur,
 * @date 14 Oct 2018
 * @copyright 2018 Royneal Rayess, Bharat Mathur
 * @brief This file defines the methods for class "OpenList"
 * This class OpenList contains data members and methods applicable
 * for the A* path planning algorithm
 */

#ifndef INCLUDE_OPENLIST_HPP_
#define INCLUDE_OPENLIST_HPP_

#include <vector>
#include <Node.hpp>
#include <Lists.hpp>

using std::vector;

class OpenList : public Lists {
 private:
  vector<Node> open_list_;
 public:
  OpenList();
  bool InList(const vector<Node>& list, const int& id);
  vector<Node>::size_type IsLowestF(vector<Node>& list);

};
#endif
