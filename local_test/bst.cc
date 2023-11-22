// MIT License
//
// Copyright (c) 2023 hykk-git, jjh1126, songjunmin, stpark0059
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// Author       :       hykk-git, jjh1126, songjunmin, stpark0059
// Date         :       2023-11-10

#include "bst.h"
#include <stack>

#define __DO_SOMETHING__ 0

template Node<int>;
template BST<int>;

template <typename T>
BST<T>::BST() : root_(nullptr) { /* empty */ }

template <typename T>
BST<T>::~BST() {
	if (Empty()) return;

	std::stack<Node<T>*> stack;
	stack.push(get_root());
	while (!stack.empty()) {
		Node<T>* current_node = stack.top();
		stack.pop();
		if (current_node->left_child != nullptr) {
			stack.push(current_node->left_child);
		}
		if (current_node->right_child != nullptr) {
			stack.push(current_node->right_child);
		}
		delete(current_node);
	}
}

template <typename T>
void BST<T>::Insert(T key) {

	__DO_SOMETHING__;
}

template <typename T>
void BST<T>::Erase(T key) {

	__DO_SOMETHING__;
}

template <typename T>
Node<T>* BST<T>::Find(T key) const {
	Node<T>* current_node = get_root();
	while (current_node != nullptr) {
		if (current_node->key < key) {
			current_node = current_node->right_child;
		}
		else if (current_node->key > key) {
			current_node = current_node->left_child;
		}
		else {
			return current_node;
		}
	}
	return nullptr;
}

template <typename T>
size_t BST<T>::Size() const {
	if (get_root() != nullptr) {
		return get_root()->size;
	}
	else {
		return 0;
	}
}

template <typename T>
bool BST<T>::Empty() const {
	return Size() == 0;
}

template <typename T>
typename Node<T>* BST<T>::get_root() const {
	return root_;
}

template <typename T>
void BST<T>::set_root(Node<T>* root) {
	root_ = root;
}
