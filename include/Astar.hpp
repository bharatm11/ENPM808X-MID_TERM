/**
* @file Astar.hpp
* @author Bharat Mathur, Royneal Rayess
* @date 10 Oct 2018
* @copyright 2018 Bharat Mathur, Royneal Rayess
* @brief This file defines the methods for class "Astar"
* This class cpp file defines data members and methods applicable for class Astar
* for the A* path planning algorithm
*/
#ifndef ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_ASTAR_HPP_
#define ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_ASTAR_HPP_

#include <vector>
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
  int id_counter_ = 0;
  std::vector<std::vector<int>> id_book_;

 public:
/**
 * @brief constructor for Astar, initializes the current_node_
 *  to the values of the starting search point and adds the current node to the closed list.
 * @param [in] start_pt is initial algorithm entry point
 * @param [in] goal_pt , it is the terminal point the algorithm is searching for.
 */
  Astar(Node start_pt, Node goal_pt);

/**
 * @brief calculates the cost to go using Manhattan distance
 * @param [in] current_loc coordinates of current_node
 * @param [in] goal_pt coordinates of final destination node
 * @return returns the Manhattan distance H.
 */
  int CalculateH(Location current_loc, Location goal_pt);

/**
 * @brief determines the cost to come
 * @param [in] current_node is the last node reached by the algorithm
 * @param [in] next_node is the neighbor node being examined
 * @return cost to come from current node to next node being 10 or 14
 * @details vertical or horizontal move cost=10 , diagonal move cost=14
 */
  int CalculateG(Node current_node, Node next_node);

/**
 * @brief calculates the G cost for next_node
 * @param [in] current_node is the last node reached by the algorithm
 * @param [in] next_node is the neighbor node being examined
 * @return G cost of next node
 * @details sums up current node G cost and cost to come of next node
 */
  int CalculateF(const int& H, const int& G);

/**
 * @brief calculates F cost
 * @param [in] H is the cost to come
 * @param [in] G is the cost to go
 * @return and int F cost the sum of H and G
 */
  void ReCalculateG(Node current_node, Node next_node);

/**
 * @brief Rexamins G cost for nodes already in Open list
 * @param [in] current_node is the last node reached by the algorithm
 * @param [in] next_node is the neighbor node being examined
 * @details new g cost = g cost of current node + cost to move to next node
 */
  void SetCurentNode();

/**
 * @brief assigns next_node to current_node
 * @details uses private members to set the
 * the next node with lowest F in open list as
 * the new current_node
 */
  void SetParentNode(Node child_node, Node parent_node);

/**
 * @brief points the chil's node parent ID to parent_node ID
 * @param [in] child_node is the node being set
 * @param [in] parent_node is the node being pointed to
 */
  std::vector<Node> FindNeighbors(Map map);

/**
 * @brief generates new nodes and initializes them
 * @param [in] map is a 2D vector representing an occupancy grid
 * @return a vector of nodes to be added to open list
 * @details all nodes will be initialized with F,G,H,ID,Location values
 */
  int GetMoveCost(Node current_node, Node next_node);

/**
 * @brief checks if current node is the target node
 * @param [in] current_node is the last node reached by the algorithm
 * @return returns a true if current node is target node
 */
  bool IsGoal(Node current_node);

/**
 * @brief checks if current node is the start node
 * @param [in] current_node is the last node reached by the algorithm
 * @return returns a true if current node is start node
 */
  bool IsStart(Node current_node);

/**
 * @brief  generates the optimal path leading from goal to start point
 * @param [in]  map 2D occupancy grid
 * @details the path is saved on the map which is then converted to an img
 */
  void GeneratePath(std::vector<std::vector<int>> map);
};


#endif /* ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_ASTAR_HPP_ */
