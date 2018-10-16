/**
* @file Node.cpp
* @author  Royneal Rayess, Bharat Mathur
* @date 13 Oct 2018
* @copyright 2018  Royneal Rayess, Bharat Mathur
* @brief This file defines the methods for class "Lists"
* This class cpp file implements data members and methods applicable for class Node
* for the A* path planning algorithm
*/

#include <iostream>
#include "lib.hpp"

/**
* @brief Constructs the Node object with default values
*/

Node::Node() {
  Node::f_ = 0;
  Node::g_ = 0;
  Node::h_ = 0;
  Node::parent_ = 0;
  Node::id_ = 0;
}

/**
* @brief Sets parent of the current node to index
* @param [in] index is the index of the parent node int
*/
void Node::SetParent(int index) {
  Node::parent_ = index;
}

/**
* @brief Returns index of parent for current node
* @return index of parent int
*/
int Node::GetParent() {
  return Node::parent_;
}

/**
* @brief Sets total cost function for the node
* @param [in] f is the cost of current node int
*/
void Node::SetF(int f) {
  Node::f_ = f;
}

/**
* @brief Sets Cost-to-come for current node
* @param [in] g is cost-to-come int
*/
void Node::SetG(int g) {
  Node::g_ = g;
}

/**
* @brief Sets Cost-to-go for current node
* @param [in] g is cost-to-go int
*/
void Node::SetH(int h) {
  Node::h_ = h;
}

/**
* @brief This gives an index ID to the node
* @param [in] id is the index ID int
*/
void Node::SetId(int id) {
  Node::id_ = id;
}

/**
* @brief Returns the index ID of the node
* @return Index ID int
*/
int Node::GetId() {
  return Node::id_;
}

/**
* @brief Returns the total cost of the node
* @return total cost int
*/
int Node::GetF() {
  return Node::f_;
}

/**
* @brief Returns the cost to come for the node
* @return cost to come int
*/
int Node::GetG() {
  return Node::g_;
}

/**
* @brief Returns the cost to go for the node
* @return cost to go int
*/
int Node::GetH() {
  return Node::h_;
}

/**
* @brief Returns the location of the node
* @return location Location
*/
Location Node::GetLocation() {
  return Node::location_;
}

/**
* @brief Stores the location of current node
* @param [in] node_location is the location of the node Location
*/
void Node::SetLocation(Location node_location) {
  Node::location_ = node_location;
}
