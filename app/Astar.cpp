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
int Astar::ReCalculateG(Node current_node, Node next_node) {

  return 0;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Astar::SetCurentNode(std::vector<Node>::size_type i) {

}
void Astar::SetParentNode(Node node, std::vector<Node>::size_type i) {

}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
std::vector<Node> Astar::FindNeighbors(Node current_node,
                                       std::vector<std::vector<int>> map) {

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


