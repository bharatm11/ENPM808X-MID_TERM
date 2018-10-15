/**
 * @file Lists.hpp
 * @author  Royneal Rayess, Bharat Mathur
 * @date 13 Oct 2018
 * @copyright 2018  Royneal Rayess, Bharat Mathur
 * @brief This file defines the methods for class "Lists"
 * This class node contains data members and methods applicable
 * for the A* path planning algorithm
 */

#include <iostream>
#include <Node.hpp>

  Node::Node() {
  Node::f_ = 0;
  Node::g_ = 0;
  Node::h_ = 0;
  Node::parent_ = 0;
  Node::id_ = 0;
}
/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Node::SetParent(int index) {
  Node::parent_ = index;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Node::GetParent() {
  return Node::parent_;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Node::SetF(int f) {
  Node::f_ = f;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Node::SetG(int g) {
  Node::g_ = g;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Node::SetH(int h) {
  Node::h_ = h;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Node::SetId(int id) {
  Node::id_ = id;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Node::GetId() {
  return Node::id_;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Node::GetF() {
  return Node::f_;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Node::GetG() {
  return Node::g_;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
int Node::GetH() {
  return Node::h_;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
Location Node::GetLocation() {
  return Node::location_;
}

/**
 * @brief <brief>
 * @param [in] <name> <parameter_description>
 * @return <return_description>
 * @details <details>
 */
void Node::SetLocation(Location node_location) {
  Node::location_ = node_location;
}

