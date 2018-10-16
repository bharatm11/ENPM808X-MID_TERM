/**
* @file Node.hpp
* @author Bharat Mathur, Royneal Rayess
* @date 10 Oct 2018
* @copyright 2018 Bharat Mathur, Royneal Rayess
* @brief This file defines the methods for class "Node"
* This class cpp file defines data members and methods applicable for class Node
* for the A* path planning algorithm
*/

#ifndef ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_NODE_HPP_
#define ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_NODE_HPP_

#include<iostream>
struct Location {
  int x = 0;
  int y = 0;
};

/**
* @brief      Class for Node
*/
class Node {
 private:
  int f_ = 0;
  int g_ = 0;
  int h_ = 0;
  Location location_;
  int parent_ = 0;
  int id_ = 0;

 public:
  /**
  * @brief Class constructor for Node object to default values
  */
  Node();

  /**
  * @brief Sets parent of the current node to index
  * @param [in] index is the index of the parent node int
  */
  void SetParent(int index);

  /**
  * @brief Returns index of parent for current node
  * @return index of parent int
  */
  int GetParent();

  /**
  * @brief Sets total cost function for the node
  * @param [in] f is the cost of current node int
  */
  void SetF(int f);

  /**
  * @brief Sets Cost-to-come for current node
  * @param [in] g is cost-to-come int
  */
  void SetG(int g);

  /**
  * @brief Sets Cost-to-go for current node
  * @param [in] g is cost-to-go int
  */
  void SetH(int h);

  /**
  * @brief This gives an index ID to the node
  * @param [in] id is the index ID int
  */
  void SetId(int id);

  /**
  * @brief Returns the index ID of the node
  * @return Index ID int
  */
  int GetId();

  /**
  * @brief Returns the total cost of the node
  * @return total cost int
  */
  int GetF();

  /**
  * @brief Returns the cost to come for the node
  * @return cost to come int
  */
  int GetG();

  /**
  * @brief Returns the cost to go for the node
  * @return cost to go int
  */
  int GetH();

  /**
  * @brief Returns the location of the node
  * @return location Location
  */
  Location GetLocation();

  /**
  * @brief Stores the location of current node
  * @param [in] node_location is the location of the node
  */
  void SetLocation(Location node_location);
};
#endif  //  ENPM_SOFT_DEV_COURSE_ENPM808X_MID_TERM_INCLUDE_NODE_HPP_
