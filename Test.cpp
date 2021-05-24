#include "doctest.h"
#include "BinaryTree.hpp"

TEST_CASE("tests"){
    ariel::BinaryTree<int> int_to_tree;
    CHECK_NOTHROW(int_to_tree.add_root(6));
    CHECK_NOTHROW(int_to_tree.add_root(5));
    CHECK_NOTHROW(int_to_tree.add_root(4));
    CHECK_NOTHROW(int_to_tree.add_root(3));
    CHECK_NOTHROW(int_to_tree.add_root(2));
    CHECK_NOTHROW(int_to_tree.add_root(1));
    CHECK_NOTHROW(int_to_tree.add_root(7));
    CHECK_NOTHROW(int_to_tree.add_root(13));
    CHECK_NOTHROW(int_to_tree.add_root(15));
    CHECK_NOTHROW(int_to_tree.add_root(60));
    CHECK_NOTHROW(int_to_tree.add_root(0));
    CHECK_NOTHROW(int_to_tree.add_root(-1));
    CHECK_NOTHROW(int_to_tree.add_root(-5));
    CHECK_NOTHROW(int_to_tree.add_root(-256));
    CHECK_NOTHROW(int_to_tree.add_root(1000000));
    CHECK_NOTHROW(int_to_tree.add_root(-1000000));
   
   //the first argument didn't exist before
    CHECK_THROWS(int_to_tree.add_left(10,3)); 
    CHECK_THROWS(int_to_tree.add_left(11,36));
    CHECK_THROWS(int_to_tree.add_left(12,6));
    CHECK_THROWS(int_to_tree.add_left(13,-1));
    CHECK_THROWS(int_to_tree.add_left(14,0));
    CHECK_THROWS(int_to_tree.add_left(15,2));

  //the first argument didn't exist before
    CHECK_THROWS(int_to_tree.add_right(17,13));
    CHECK_THROWS(int_to_tree.add_right(45,2));
    CHECK_THROWS(int_to_tree.add_right(-1,0));
    CHECK_THROWS(int_to_tree.add_right(89,67));
    
 // the first argument exist
    CHECK_NOTHROW(int_to_tree.add_right(1000000,42));
    CHECK_NOTHROW(int_to_tree.add_right(-256,7));
    CHECK_NOTHROW(int_to_tree.add_right(-5,4));
    CHECK_NOTHROW(int_to_tree.add_right(-1,23));
    CHECK_NOTHROW(int_to_tree.add_right(60,37));
    CHECK_NOTHROW(int_to_tree.add_right(13,41));
    CHECK_NOTHROW(int_to_tree.add_right(15,0));

}