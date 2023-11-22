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

#include "avl.h"

#define __DO_SOMETHING__ 0

template AVL<int>;

template <typename T>
AVL<T>::AVL() { /* empty */ }

template <typename T>
AVL<T>::~AVL() { /* empty */ }

template <typename T>
void AVL<T>::Insert(T key) {
	BST<T>::Insert(key);
	Rotate(BST<T>::Find(key));
}

template <typename T>
void AVL<T>::Erase(T key) {

    __DO_SOMETHING__;
}

template <typename T>
void AVL<T>::Rotate(Node<T>* node) {
    int balanceGap = CheckBalanceGap(node);
    if (balanceGap >= 2) {
        // 높이 차이 발생
        // LL, RR, LR, RL 회전함수 이용
    }
}

template <typename T>
int AVL<T>::CheckBalanceGap(Node<T>* node) {

    return __DO_SOMETHING__;
}

template <typename T>
Node<T>* AVL<T>::LL(Node<T>*) {

    return __DO_SOMETHING__;
}

template <typename T>
Node<T>* AVL<T>::RR(Node<T>*) {

    return __DO_SOMETHING__;
}

template <typename T>
Node<T>* AVL<T>::LR(Node<T>*) {

    return __DO_SOMETHING__;
}

template <typename T>
Node<T>* AVL<T>::RL(Node<T>*) {

    return __DO_SOMETHING__;
}