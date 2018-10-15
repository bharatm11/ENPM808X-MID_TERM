#include <gtest/gtest.h>
#include <Lists.hpp>
#include <Node.hpp>
#include <OpenList.hpp>

/*TEST(TestCaseName, TestName) {
 ... test body ...
 }*/


 TEST(NodeTest,Baseline) {
  Node my_node;

  ASSERT_EQ(0, my_node.GetG())<<"Checking GetG()";
  ASSERT_EQ(0, my_node.GetF())<<"Checking GetF()";
  ASSERT_EQ(0, my_node.GetH())<<"Checking GetH()";
  ASSERT_EQ(0, my_node.GetParent())<<"Checking GetParent";
  // ASSERT_EQ(0, my_node.GetLocation());

}

 TEST(NodeTest, AssignValues) {
  Node my_node;
  Location my_location;
  my_location.x = 1;
  my_location.y = 1;
  
  my_node.SetF(14);
  my_node.SetG(10);
  my_node.SetH(4);
  my_node.SetParent(2);
  my_node.SetLocation(my_location);

  EXPECT_EQ(14, my_node.GetF());
  EXPECT_EQ(10, my_node.GetG());
  EXPECT_EQ(4, my_node.GetH());
  EXPECT_EQ(my_location.x, my_node.GetLocation().x);
  EXPECT_EQ(my_location.y, my_node.GetLocation().y);

 }


TEST(ListsTest, AddNodes) {
  Lists my_list;
  Node my_node, my_node2;
  Location my_location;
  my_location.x = 4;
  my_location.y = 2;

  my_node.SetF(4);
  my_node.SetG(2);
  my_node.SetH(2);
  my_node.SetParent(3);
  my_node.SetLocation(my_location);

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
  Location my_location;
  my_location.x = 4;
  my_location.y = 2;

  my_node.SetF(4);
  my_node.SetG(2);
  my_node.SetH(2);
  my_node.SetParent(3);
  my_node.SetLocation(my_location);

  vector<Node> Open_list;
  vector<Node>& O_list = Open_list;
  my_list.Add(O_list, my_node);
  my_list.Add(O_list, my_node2);

  vector<Node>::size_type list_size = 2;
  vector<Node>::iterator iter = Open_list.begin();

  ASSERT_EQ(list_size, Open_list.size())<< "verify data size equals 2";
  list_size = 1;
  my_list.Remove(O_list, iter);
  ASSERT_EQ(list_size, Open_list.size())<< "verify data size reduced to 1";
}


TEST(ListsTest, SortNodes) {
  Lists my_list;
  Node my_node, my_node2, my_node3;

  my_node.SetF(3);
  my_node2.SetF(2);
  my_node3.SetF(1);

  vector<Node> Open_list;
  vector<Node>& O_list = Open_list;
  vector<Node>::size_type i;
  my_list.Add(O_list, my_node);
  my_list.Add(O_list, my_node2);
  my_list.Add(O_list, my_node3);
  i = 0;
  EXPECT_EQ(3,Open_list[i].GetF())
      << "verify data inserted in vector properly";
  i = 2;
  my_list.SortList(O_list);
  EXPECT_EQ(3, Open_list[i].GetF())
      << "verify data was sorted in vector properly";

}

