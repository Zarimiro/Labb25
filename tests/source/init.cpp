#include<Labb25.hpp>
#include<catch.hpp>

SCENARIO("Inserting a nonexistent node") {
    BinarySearchTree <int> *Tree=NULL;
    add_branch(5, Tree);
    int rv = add_branch(6, Tree);;
    
    REQUIRE( rv == 0);
}

SCENARIO("Inserting an already existent node") {
    BinarySearchTree <int> *Tree=NULL;
    add_branch(5, Tree);
    int rv = add_branch(5, Tree);;
    
    REQUIRE( rv == 1);
}
SCENARIO("Search for an existent node") {
   BinarySearchTree <int> *Tree=NULL;
    add_branch(5, Tree);
    add_branch(6, Tree);
    int rv = search_all(Tree,6);
    
    REQUIRE( rv == 0);
}

SCENARIO("Search for a nonexistent node") {
   BinarySearchTree <int> *Tree=NULL;
    add_branch(5, Tree);
    add_branch(6, Tree);
    int rv = search_all(Tree,7);
    
    REQUIRE( rv == 1);
}

SCENARIO("Deleting an existent node") {
    binarytree <int> tree;
    tree.insert(14);
    tree.insert(15);
    int rv = tree.destroynode(15);
    
    REQUIRE( rv == 0);
}

SCENARIO("Deleting a nonexistent node") {
    binarytree <int> tree;
    tree.insert(14);
    tree.insert(15);
    int rv = tree.destroynode(17);
    
    REQUIRE( rv == 1);
}
