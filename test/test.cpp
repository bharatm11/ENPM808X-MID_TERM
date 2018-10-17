#include <gtest/gtest.h>
#include "lib.hpp"

/*TEST(TestCaseName, TestName) {
... test body ...
}*/

using std::vector;

TEST(NodeTest, GetG) {
  Node my_node;
  ASSERT_EQ(0, my_node.GetG())<<"Checking GetG()";
}

TEST(NodeTest, GetF) {
  Node my_node;
  ASSERT_EQ(0, my_node.GetF())<<"Checking GetF()";
}

TEST(NodeTest, GetH) {
  Node my_node;
  ASSERT_EQ(0, my_node.GetH())<<"Checking GetH()";
}

TEST(NodeTest, GetParent) {
  Node my_node;
  ASSERT_EQ(0, my_node.GetParent())<<"Checking GetParent";
}


TEST(NodeTest, SetParent) {
  Node my_node;
  Location my_location;

  EXPECT_EQ(0, my_node.GetParent());
  my_node.SetParent(2);
  EXPECT_EQ(2, my_node.GetParent());
}

TEST(NodeTest, SetLocation) {
  Node my_node;
  Location my_location;

  my_location.x = 1;
  my_location.y = 1;
  EXPECT_EQ(0, my_node.GetLocation().x);
  EXPECT_EQ(0, my_node.GetLocation().y);
  my_node.SetLocation(my_location);
  EXPECT_EQ(my_location.x, my_node.GetLocation().x);
  EXPECT_EQ(my_location.y, my_node.GetLocation().y);


}

TEST(NodeTest, SetF) {
  Node my_node;
  Location my_location;

  EXPECT_EQ(0, my_node.GetF());
  my_node.SetF(14);
  EXPECT_EQ(14, my_node.GetF());
}

TEST(NodeTest, SetG) {
  Node my_node;
  Location my_location;

  EXPECT_EQ(0, my_node.GetG());
  my_node.SetG(10);
  EXPECT_EQ(10, my_node.GetG());
}

TEST(NodeTest, SetH) {
  Node my_node;
  Location my_location;

  EXPECT_EQ(0, my_node.GetH());
  my_node.SetH(4);
  EXPECT_EQ(4, my_node.GetH());

}

TEST(ListsTest, AddNodes) {
  Lists my_list;
  Node my_node, my_node2;

  vector<Node> Open_list;
  vector<Node>& O_list = Open_list;
  vector<Node>::size_type list_size = 2;

  my_list.Add(O_list, my_node);
  my_list.Add(O_list, my_node2);

  ASSERT_EQ(list_size, Open_list.size());

}


TEST(ListsTest, RemoveNodes) {
  Lists my_list;
  Node my_node, my_node2;

  vector<Node> Open_list;
  vector<Node>& O_list = Open_list;
  my_list.Add(O_list, my_node);
  my_list.Add(O_list, my_node2);

  vector<Node>::size_type list_size = 2;
  vector<Node>::iterator iter = Open_list.begin();

  ASSERT_EQ(list_size, Open_list.size());
  list_size = 1;
  my_list.Remove(O_list, iter);
  ASSERT_EQ(list_size, Open_list.size());
}


TEST(ListsTest, SortNodes) {
  Lists my_list;
  Node my_node1, my_node2, my_node3;

  my_node1.SetF(3);
  my_node2.SetF(2);
  my_node3.SetF(1);

  vector<Node> Open_list;
  vector<Node>& O_list = Open_list;
  vector<Node>::size_type i;
  my_list.Add(O_list, my_node3);
  my_list.Add(O_list, my_node2);
  my_list.Add(O_list, my_node1);

  i = 0;
  EXPECT_EQ(1, Open_list[i].GetF());

  i = 2;
  my_list.SortList(O_list);
  EXPECT_EQ(1, Open_list[i].GetF());

}

TEST(OpenList,CheckInList) {
  // create a list
  // create a node
  // add node to list
  // check for right node should return true
  // check for node in empty vector should return false
  // check for wrong node in vector should return false
  //  bool InList(const vector<Node>& list, const int& id);

  OpenList list;
  vector<Node> Open_list;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node2.SetId(2);
  node3.SetId(3);

  list.Add(O_list, node1);
  list.Add(O_list, node2);
  list.Add(O_list, node3);

  int id = 1;
  int & idref = id;

  EXPECT_TRUE(list.InList(O_list, idref));
  id = 2;
  EXPECT_TRUE(list.InList(O_list, idref));
  id = 3;
  EXPECT_TRUE(list.InList(O_list, idref));
  id = 4;
  EXPECT_FALSE(list.InList(O_list, idref));

}

TEST(OpenList,IsLoswestF_Case0) {
  //create a list
  //create multiple nodes
  //add nodes to list
  //case 0- all Fs are different, elements are sorted, Test sorting will not change
  //case 1- all Fs are different, Add lowest F at top, Test sorting will sort properly
  //case 2- two Fs are same different H values last elment lowest H
  //case 3- two Fs are same , different H values second to last element lowest H
  //case 4- two Fs are same equal H values
  //case 5- 3 Fs are the same all different H

  OpenList list;
  vector<Node> Open_list;
  vector<Node>::size_type i;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(2);
  node2.SetH(2);
  node3.SetId(3);
  node3.SetF(3);
  node3.SetH(3);
  node4.SetId(4);
  node4.SetF(4);
  node4.SetH(4);

  list.Add(O_list, node4);
  list.Add(O_list, node3);
  list.Add(O_list, node2);
  list.Add(O_list, node1);

  i = 3;  //after sorting node1 will be at the bottom
  EXPECT_EQ(i, list.IsLowestF(Open_list));

}
TEST(OpenList,IsLoswestF_Case1) {
  //create a list
  //create multiple nodes
  //add nodes to list
  //case 1- all Fs are different, Add lowest F at top, Test sorting
  //case 2- two Fs are same different H values last elment lowest H
  //case 3- two Fs are same , different H values second to last element lowest H
  //case 4- two Fs are same equal H values
  //case 5- 3 Fs are the same all different H

  OpenList list;
  vector<Node> Open_list;
  vector<Node>::size_type i;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(2);
  node2.SetH(2);
  node3.SetId(3);
  node3.SetF(3);
  node3.SetH(3);
  node4.SetId(4);
  node4.SetF(4);
  node4.SetH(4);

  list.Add(O_list, node1);
  list.Add(O_list, node2);
  list.Add(O_list, node3);
  list.Add(O_list, node4);

  i = 3;  //after sorting node1 will be at the bottom
  EXPECT_EQ(i, list.IsLowestF(Open_list));

}

TEST(OpenList,IsLoswestF_Case2) {
  //create a list
  //create multiple nodes
  //add nodes to list
  //case 1- all Fs are different
  //case 2- two Fs are same different H values last elment lowest H
  //case 3- two Fs are same , different H values second to last element lowest H
  //case 4- two Fs are same equal H values
  //case 5- 3 Fs are the same all different H

  OpenList list;
  vector<Node> Open_list;
  vector<Node>::size_type i;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(4);
  node2.SetId(2);
  node2.SetF(1);
  node2.SetH(2);
  node3.SetId(3);
  node3.SetF(4);
  node3.SetH(3);
  node4.SetId(4);
  node4.SetF(4);
  node4.SetH(1);

  list.Add(O_list, node1);
  list.Add(O_list, node2);
  list.Add(O_list, node3);
  list.Add(O_list, node4);

  i = 3;
  EXPECT_EQ(i, list.IsLowestF(Open_list));

}

TEST(OpenList,IsLoswestF_Case3) {
  //create a list
  //create multiple nodes
  //add nodes to list
  //case 1- all Fs are different
  //case 2- two Fs are same different H values last elment lowest H
  //case 3- two Fs are same , different H values second to last element lowest H
  //case 4- two Fs are same equal H values
  //case 5- 3 Fs are the same all different H

  OpenList list;
  vector<Node> Open_list;
  vector<Node>::size_type i;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(2);
  node2.SetH(2);
  node3.SetId(3);
  node3.SetF(4);
  node3.SetH(3);
  node4.SetId(4);
  node4.SetF(4);
  node4.SetH(4);

  list.Add(O_list, node1);
  list.Add(O_list, node2);
  list.Add(O_list, node3);
  list.Add(O_list, node4);

  i = 3;
  EXPECT_EQ(i, list.IsLowestF(Open_list));

}

TEST(OpenList,IsLoswestF_Case4) {
  //create a list
  //create multiple nodes
  //add nodes to list
  //case 1- all Fs are different
  //case 2- two Fs are same different H values last elment lowest H
  //case 3- two Fs are same , different H values second to last element lowest H
  //case 4- two Fs are same equal H values
  //case 5- 3 Fs are the same all different H

  OpenList list;
  vector<Node> Open_list;
  vector<Node>::size_type i;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(2);
  node2.SetH(2);
  node3.SetId(3);
  node3.SetF(2);
  node3.SetH(2);
  node4.SetId(4);
  node4.SetF(4);
  node4.SetH(4);

  list.Add(O_list, node1);
  list.Add(O_list, node2);
  list.Add(O_list, node3);
  list.Add(O_list, node4);

  i = 3;  //after sorting lowest 2 Fs will be at the bottom,
  //since the comparison function uses less than, the last
  // element in the vector will always be selected
  EXPECT_EQ(i, list.IsLowestF(Open_list));

}

TEST(OpenList,IsLoswestF_Case5) {
  //create a list
  //create multiple nodes
  //add nodes to list
  //case 1- all Fs are different
  //case 2- two Fs are same different H values last elment lowest H
  //case 3- two Fs are same , different H values second to last element lowest H
  //case 4- two Fs are same equal H values
  //case 5- 3 Fs are the same all different H

  OpenList list;
  vector<Node> Open_list;
  vector<Node>::size_type i;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(1);
  node2.SetH(2);
  node3.SetId(3);
  node3.SetF(1);
  node3.SetH(3);
  node4.SetId(4);
  node4.SetF(2);
  node4.SetH(4);

  list.Add(O_list, node1);
  list.Add(O_list, node2);
  list.Add(O_list, node3);
  list.Add(O_list, node4);

  i = 1;
  EXPECT_EQ(i, list.IsLowestF(Open_list));

}

TEST(ClosedList,CheckNotInList) {
  // create a list
  // create a node
  // add node to list
  // check for wrong node , should return true
  // check for node in list , should return false
  ClosedList list;
  vector<Node> Open_list;
  vector<Node>& O_list = Open_list;

  Node node1, node2, node3, node4;
  node1.SetId(1);
  node2.SetId(2);
  node3.SetId(3);

  list.Add(O_list, node1);
  list.Add(O_list, node2);
  list.Add(O_list, node3);

  int id = 1;
  int & idref = id;

  EXPECT_FALSE(list.NotInList(O_list, idref));
  id = 2;
  EXPECT_FALSE(list.NotInList(O_list, idref));
  id = 3;
  EXPECT_FALSE(list.NotInList(O_list, idref));
  id = 4;
  EXPECT_TRUE(list.NotInList(O_list, idref));
}

TEST(Map, CheckReadMap) {
  std::vector<std::vector<int>> a;
  Map my_map;
  std::vector<std::vector<int>> map{ { 1, 1, 1, 1},{1, 0, 0, 1},{1, 1, 1, 1} };
  a=my_map.ReadMap(map);
  int rows=0;
  int columns=0;
  rows=a.size();
  columns=a[0].size();
  EXPECT_EQ(3,rows);
  EXPECT_EQ(4,columns);
}

TEST(Map2, CheckUpdateMap) {
  std::vector<std::vector<int>> a;
  Map my_map;
  std::vector<std::vector<int>> map{ { 1, 1, 1, 1},{1, 0, 0, 1},{1, 1, 1, 1} };
  a=my_map.ReadMap(map);
  Location my_location;
  my_location.x=2;
  my_location.y=2;
  a=my_map.UpdateMap(my_location, map);
  EXPECT_EQ(2,a[2][2]);
}

TEST(Map2, CheckIsOccupied) {
  std::vector<std::vector<int>> a;
  Map my_map;
  std::vector<std::vector<int>> map{ { 1, 1, 1, 1},{1, 0, 0, 1},{1, 1, 1, 1} };
  a=my_map.ReadMap(map);
  Location my_location;
  my_location.x=1;
  my_location.y=1;
  EXPECT_EQ(true,my_map.IsOccupied(my_location));
}


TEST(Astar1, CheckCalculateH) {
  Location my_location;
  my_location.x=1;
  my_location.y=1;
  Location my_location2;
  my_location2.x=2;
  my_location2.y=2;
  Node node1, node2;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(1);
  node2.SetH(2);
  Astar astar(node1, node2);
  EXPECT_EQ(2,astar.CalculateH(my_location, my_location2));
}


TEST(Astar2, CheckGetMoveCost) {
  Location my_location;
  my_location.x=1;
  my_location.y=1;
  Location my_location2;
  my_location2.x=2;
  my_location2.y=2;
  Node node1, node2;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(1);
  node2.SetH(2);
  Astar astar(node1, node2);
  EXPECT_EQ(10, astar.GetMoveCost(node1, node2));
}

TEST(Astar3, CheckCalculateG) {
  Location my_location;
  my_location.x=1;
  my_location.y=1;
  Location my_location2;
  my_location2.x=2;
  my_location2.y=2;
  Node node1, node2;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(1);
  node2.SetH(2);
  Astar astar(node1, node2);
  EXPECT_EQ(10, astar.CalculateG(node1, node2));
}

TEST(Astar4, CheckCalculateF) {
  int h=5;
  int g=10;
  Node node1, node2;
  node1.SetId(1);
  node1.SetF(1);
  node1.SetH(1);
  node2.SetId(2);
  node2.SetF(1);
  node2.SetH(2);
  Astar astar(node1, node2);
  EXPECT_EQ(15, astar.CalculateF(h,g));
}
