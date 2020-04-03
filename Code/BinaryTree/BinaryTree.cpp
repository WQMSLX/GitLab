#include<iostream>
#include<stack>
using namespace std;
struct BinaryTree {
    int value;
    BinaryTree* pLeft;
    BinaryTree* pRight;
};



void ConvertNode(BinaryTree* node, BinaryTree*& BinaryLastNode)
{
    if (!node)return;
    BinaryTree* pCur = node;
    //if (pCur->pLeft)
        ConvertNode(pCur->pLeft, BinaryLastNode);
    pCur->pLeft = BinaryLastNode;
    if (BinaryLastNode)BinaryLastNode->pRight = pCur;
    BinaryLastNode = pCur;
    //if (pCur->pRight)
    ConvertNode(pCur->pRight, BinaryLastNode);
}
BinaryTree* GetHead(BinaryTree* node)
{
    BinaryTree* BinaryLastNode = nullptr;
    ConvertNode(node, BinaryLastNode);
    while (BinaryLastNode && BinaryLastNode->pLeft)BinaryLastNode = BinaryLastNode->pLeft;
    return BinaryLastNode;
}
void TraversalList(BinaryTree* pHead) {
    BinaryTree* pCurrent = pHead;
    //cout << "ok" << endl;
    while (pCurrent) {

        cout << pCurrent->value << endl;
        pCurrent = pCurrent->pRight;
    }
}
void CreateBinaryTree() {
    BinaryTree node1 = { 1,nullptr,nullptr };
    BinaryTree node2 = { 2,nullptr,nullptr };
    BinaryTree node3 = { 3,nullptr,nullptr };
    BinaryTree node4 = { 4,nullptr,nullptr };
    BinaryTree node5 = { 5,nullptr,nullptr };
    BinaryTree node6 = { 7,nullptr,nullptr };
    BinaryTree node7 = { 8,nullptr,nullptr };
    BinaryTree node8 = { 9,nullptr,nullptr };

    node1.pLeft = &node2;
    node1.pRight = &node6;
    node2.pRight = &node3;
    node3.pLeft = &node4;
    node3.pRight = &node5;
    node6.pRight = &node7;
    node7.pLeft = &node8;

    //ConvertNode(&node1);
    BinaryTree* list = GetHead(&node1);
    TraversalList(list);
}
//使用中序递归遍历
//二叉树的下一个节点
BinaryTree* GetNext(BinaryTree* pNode)
{
    if (pNode == nullptr)
        return nullptr;
    BinaryTree * pNext = nullptr;
    if (pNode->pRight != nullptr)
    {
        BinaryTree* Right = nullptr;
        Right = pNode->pRight;
        while (Right->pLeft)Right = Right->pLeft;
        pNext = Right;
    }
    else if (pNode->m_pParent == nullptr)
    {
        BinaryTree* pCurrent = pNode;
        BinaryTree* pParent = pCurrent->m_pParent;

        while (pParent&& pCurrent = pParent->pRight)
        {
            pCurrent = pParent;
            pParent = pParent->m_pParent;

        }
        pNext = pParent;
    }
    return pNext;
}
int main()
{
    CreateBinaryTree();
    return 0;
}
