#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

namespace ariel{

    template<typename T>
    class BinaryTree
    { 

    struct Node
    {
        T data;
        Node *left;
        Node *right;
        Node *father;
       
        Node(){ // constuctor
           this->left = nullptr;
           this->right = nullptr;
           this->father = nullptr;
       }
        Node(T data){ // copy constructor
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
            this->father = nullptr;
        }
        ~Node(){    //destructor 
            if(this->left != nullptr)
            {
                delete this->left;
            }
            if(this->right != nullptr)
            {
                delete this->right;
            }
        }
        void setFather(Node *father) //setter
        {
            this->father = father;
        }
    };
   
    public:
        BinaryTree &add_root(const T &root)
        {
            return *this;
        }

         BinaryTree &add_left(const T &father, const T &left)
        {
            return *this;
        }
        BinaryTree &add_right(const T &father, const T &right)
        {
            return *this;
        }
        friend std::ostream &operator<<(std::ostream &os, const BinaryTree<T> &binaryTree)
        {
            return os;
        }
        
        class preorder{
         Node *ptr_curr;
        
         public:
          preorder(Node *ptr = nullptr): ptr_curr(ptr){}
            preorder &operator++()
            {
                return *this;
            }
            T *operator->() const
            {
                return &(ptr_curr->data);
            }

            T &operator*() const
            {
                return ptr_curr->data;
            }

            const preorder operator++(int)
            {
                iterator help = *this;
                ptr_curr = ptr_curr->m_next;
                return help;
            }

            bool operator==(const preorder &rhs) const
            {
                return ptr_curr == rhs.ptr_curr;
            }
            bool operator!=(const preorder &rhs) const
            {
                return ptr_curr != rhs.ptr_curr;
            } 
        };
          preorder begin_preorder()
        {
            return preorder{};
        }

        preorder end_preorder()
        {
            return preorder{};
        }

        class inorder{
            Node *ptr_curr;

        public:
        inorder(Node *ptr = nullptr): ptr_curr(ptr)
        {}
        
        T *operator->() const
        {
            return &(ptr_curr->data);
        }
        
        T &operator*() const
        {
           return ptr_curr->data;
        }
        
        inorder &operator++()
        {
        return *this;
        }
       
        const inorder operator++(int)
            {
            iterator help = *this;
            ptr_curr = ptr_curr->m_next;
            return help;
            }

        bool operator==(const inorder &rhs) const
        {
            return ptr_curr == rhs.ptr_curr;
        }

        bool operator!=(const inorder &rhs) const
        {
            return ptr_curr != rhs.ptr_curr;
        }
    };
        inorder begin_inorder()
        {
            return inorder{};
        }
        
        inorder end_inorder()
        {
            return inorder{};
        }
    
    class postorder
    {
    private:
        Node *ptr_curr;

    public:
            postorder(Node *ptr = nullptr): ptr_curr(ptr)
            {}
        
        T *operator->() const
        {
            return &(ptr_curr->data);
        }


        T &operator*() const
        {
        return ptr_curr->data;
        }

        postorder &operator++()
        {
        return *this;
        }

       const postorder operator++(int)
        {
            iterator help = *this;
            ptr_curr = ptr_curr->m_next;
            return help;
        }
        bool operator==(const postorder &rhs) const
        {
        return ptr_curr == rhs.ptr_curr;
        }
         
        bool operator!=(const postorder &rhs) const
        {
        return ptr_curr != rhs.ptr_curr;
        }        
    };
     postorder begin_postorder()
        {
            return postorder{};
        }
        postorder end_postorder()
        {
            return postorder{};
        }
      
        inorder begin()
        {
            return begin_inorder();
        };
        inorder end()
        {
            return end_inorder();
        };
    };   
};
