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

}

class Node {
private:
  double F=0;
  double G=0;
  double H=0;
  Location location;
  int parent;

public:
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
  int GetParent(int index);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetF(double f);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetG(double g);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetH(double h);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void GetF(double f);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void GetG(double g);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void GetH(double h);

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  location GetLocation();

  /**
  * @brief <brief>
  * @param [in] <name> <parameter_description>
  * @return <return_description>
  * @details <details>
  */
  void SetLocation(Location node_location);






}
