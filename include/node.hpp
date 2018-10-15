/**
* @file Node.hpp
* @author Bharat Mathur, Royneal Rayess
* @date 10 Oct 2018
* @copyright 2018 Bharat Mathur, Royneal Rayess
* @brief This file defines the methods for class "node"
* This class node contains data members and methods applicable
* for the A* path planning algorithm
*/

#ifndef INCLUDE_NODE_HPP_
#define INCLUDE_NODE_HPP_

#include<iostream>
struct Location {
  int x=0;
  int y=0;

};

class Node {
private:
  int f_ = 0;
  int g_ = 0;
  int h_ = 0;
  Location location_;
  int parent_;

public:

  /**
   * @brief <brief>
   * @param [in] <name> <parameter_description>
   * @return <return_description>
   * @details <details>
   */
  Node();
  
  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetParent(int index);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  int GetParent();

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetF(int f);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetG(int g);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetH(int h);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  int GetF();

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  int GetG();

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  int GetH();

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  Location GetLocation();

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetLocation(Location node_location);

};
#endif

