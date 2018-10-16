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
Astar::Astar() {

}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Astar::CalculateH(Location current_loc, Location goal_pt) {

  return 0;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Astar::CalculateG(Node current_node, Node next_node) {

  return 0;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Astar::CalculateF(const int& H, const int& G) {

  return 0;
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
void Astar::SetParentNOde(Node node, std::vector<Node>::size_type i) {

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
int Astar::GetMoveCost(Node current_node, Node next_node) {

  return 0;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
bool Astar::IsGoal(Node current_node) {

  return true;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
bool Astar::IsStart(Node current_node) {

  return true;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Astar::GeneratePath(std::vector<std::vector<int>> map) {

}


