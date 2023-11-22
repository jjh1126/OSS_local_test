#include <iostream>
#include "avl.h"
using namespace std;

int main() {
	AVL<int> my_tree;

	my_tree.set_root(new Node<int>(0, 0, 0, 1, 0));

	cout << my_tree.Empty() << '\n';
	cout << my_tree.Size() << '\n';
	
}