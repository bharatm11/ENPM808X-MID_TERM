/**
 * @file Astar.cpp
 * @author  Royneal Rayess,
 * @date 14 Oct 2018
 * @copyright 2018  Royneal Rayess,
 * @brief This file defines the methods for class "Astar"
 * This class OpenList contains data members and methods applicable
 * for the A* path planning algorithm
 */
#include <iostream>
#include "lib.hpp"

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
Astar::Astar(Node start_pt, Node goal_pt) {
  this->current_node_.SetId(start_pt.GetId());  // initialize current node to start point .
  this->current_node_.SetParent(start_pt.GetParent());
  this->current_node_.SetLocation(start_pt.GetLocation());
  this->current_node_.SetF(0);
  this->current_node_.SetG(0);
  this->current_node_.SetH(0);
  this->open_list_manager.Add(this->closed_list_ref_, current_node_);  //add current node to closed list
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Astar::CalculateH(Location current_loc, Location goal_pt) {
  return std::abs(current_loc.x - goal_pt.x)
      + std::abs(current_loc.y - goal_pt.y);
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Astar::GetMoveCost(Node current_node, Node next_node) {

  int CM = 0;
  if (next_node.GetLocation().x != current_node.GetLocation().x
      && next_node.GetLocation().y != current_node.GetLocation().y) {
    CM = 14;  //cost to move diagonally
  } else
    CM = 10;

  return CM;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Astar::CalculateG(Node current_node, Node next_node) {
  int Gc = current_node.GetG();
  int CM = this->GetMoveCost(current_node, next_node);
  int G = Gc + CM;
  return G;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Astar::CalculateF(const int& H, const int& G) {
  return H + G;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Astar::ReCalculateG(Node current_node, Node next_node) {

  //new g cost = g cost of current node + cost to move to next node
  int new_cost = current_node.GetG()
      + this->GetMoveCost(current_node, next_node);
  if (new_cost < next_node.GetG()) {
  //asign current_node as parent of next_node
    this->SetParentNode(next_node, current_node);
}
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Astar::SetCurentNode() {
  std::vector<Node>::size_type i;
  i = this->open_list_manager.IsLowestF(this->open_list_);
  this->current_node_ = this->open_list_.at(i);
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Astar::SetParentNode(Node child_node, Node parent_node) {
  child_node.SetParent(parent_node.GetParent());
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
std::vector<Node> Astar::FindNeighbors(Map map) {
  this->current_node_;
  this->closed_list_;
  this->open_list_;
  std::vector<Node> new_neighbors;
  Node new_node;
  Location upper_corner;
  //set  search start position to upper corner of neighbor square.
  //current_node_ is at the center of the 9 node square.
  upper_corner.x = current_node_.GetLocation().x - 1;
  upper_corner.y = current_node_.GetLocation().y - 1;

  //add checks in case current node is on the corner or edge of map.

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
// && this->closed_list_manager.NotInList(closed_list_,)
      upper_corner.x += i;
      upper_corner.y += j;
      new_node.SetParent(current_node_.GetParent());

      if (map.IsOccupied(upper_corner)) {
        //if location is not occupied check if node has been visited

        if (id_book_[upper_corner.x][upper_corner.y] != -1) {
          //node has been visited, read ID from ID_book

          //check if it's already in open list
          //if in the open list recalculate FGH
          //if in the closed list ignore

        } else {
          //its a new node, create ID for it
          //set current node as its parent
          //set location
          //calculate its H,G,F
          id_counter_ += 1;
          new_node.SetLocation(upper_corner);
          new_node.SetId(id_counter_);
          new_node.SetParent(current_node_.GetParent());
          new_node.SetG(CalculateG(current_node_, new_node));
          new_node.SetH(CalculateH(new_node.GetLocation(), goal_pt_));
          new_node.SetF(CalculateF(new_node.GetH(), new_node.GetG()));

          //add to open list
        }

      }


  }
}

  std::vector<Node> node;

  return node;
}


/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
bool Astar::IsGoal(Node current_node) {
  if (current_node.GetLocation().x == this->goal_pt_.x
      && current_node.GetLocation().y == this->goal_pt_.y)
    return true;
  else
    return false;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
bool Astar::IsStart(Node current_node) {
  if (current_node.GetLocation().x == this->start_pt_.x
      && current_node.GetLocation().y == this->start_pt_.y)
    return true;
  else
    return false;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Astar::GeneratePath(std::vector<std::vector<int>> map) {

}


