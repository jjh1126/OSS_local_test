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

#ifndef _BST_H_
#define _BST_H_


template <typename T>
struct Node {
    Node* parent;
    Node* left_child;
    Node* right_child;
    size_t size;
    T key;

    Node(Node* _parent, Node* _left_child, Node* _right_child, size_t _size, T _key) :
        parent(_parent), left_child(_left_child), right_child(_right_child), 
        size(_size), key(_key) {}
};

template <typename T>
class BST {
public:
    
    BST();
    virtual ~BST();

    virtual void Insert(T);
    virtual void Erase(T);

    Node<T>* Find(T) const;

    size_t Size() const;
    bool Empty() const;

    Node<T>* get_root() const;
    void set_root(Node<T>*);

private:
    Node<T>* root_;
};

#endif
