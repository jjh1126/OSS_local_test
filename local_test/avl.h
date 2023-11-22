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

// Author	: 	hykk-git, jjh1126, songjunmin, stpark0059
// Date		:	2023-11-10

#ifndef _AVL_H_
#define _AVL_H_

#include "bst.h"

template <typename T>
class AVL : public BST<T> {
public:

	AVL();
	~AVL();

	void Insert(T) override;
	void Erase(T) override;

	void Rotate(Node<T>*);
	int CheckBalanceGap(Node<T>*);

	Node<T>* LL(Node<T>*);
	Node<T>* RR(Node<T>*);
	Node<T>* LR(Node<T>*);
	Node<T>* RL(Node<T>*);
};

#endif
