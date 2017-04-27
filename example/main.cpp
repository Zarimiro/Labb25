#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<fstream>
#include"Labb25.hpp"

int main() {
	BinarySearchTree <int> *Tree = NULL;
	add_branch(5, Tree);
	add_branch(4, Tree);
	add_branch(6, Tree);
	add_branch(3, Tree);
	add_branch(6, Tree);
	add_branch(7, Tree);
	add_branch(8, Tree);
	print_all(Tree);

	search_all(Tree, 6);
	search_all(Tree, 8);


	save(Tree);

	clear(Tree);
	_getch();
	return 0;
}
