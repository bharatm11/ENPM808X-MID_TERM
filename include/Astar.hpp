/**
 * @file Astar.hpp
 * @author  Royneal Rayess,
 * @date 14 Oct 2018
 * @copyright 2018  Royneal Rayess,
 * @brief This file defines the methods for class "Astar"
 * This class OpenList contains data members and methods applicable
 * for the A* path planning algorithm
 */
#ifndef INCLUDE_ASTAR_HPP_
#define INCLUDE_ASTAR_HPP_

#include "lib.hpp"

class Astar {

 private:
  Location start_pt_;
  Location goal_pt_;
  Node current_node_;
  Node next_node_;
  OpenList open_list_manager;
  ClosedList closed_list_manager;
  std::vector<Node> open_list_;
  std::vector<Node> closed_list_;
  std::vector<Node>& open_list_ref_ = open_list_;
  std::vector<Node>& closed_list_ref_ = closed_list_;
 public:

  Astar(Node start_pt, Node goal_pt);
  int CalculateH(Location current_loc, Location goal_pt);
  int CalculateG(Node current_node, Node next_node);
  int CalculateF(const int& H, const int& G);
  int ReCalculateG(Node current_node, Node next_node);
  void SetCurentNode(std::vector<Node>::size_type i);
  void SetParentNode(Node node, std::vector<Node>::size_type i);
  std::vector<Node> FindNeighbors(Node current_node,
                                  std::vector<std::vector<int>> map);
  int GetMoveCost(Node current_node, Node next_node);
  bool IsGoal(Node current_node);
  bool IsStart(Node current_node);
  void GeneratePath(std::vector<std::vector<int>> map);
};


#endif /* INCLUDE_ASTAR_HPP_ */
