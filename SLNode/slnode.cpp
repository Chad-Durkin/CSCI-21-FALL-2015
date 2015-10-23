/*
Challenge 17 implementation file
Chad Durkin
10/22/15
*/

#include "slnode.h"

SLNode::SLNode () : nextNode(NULL), contents(0) {}

SLNode::SLNode (int listData) : contents(listData) {}

SLNode::~SLNode () {}

void SLNode::setContents (int listData) {
    contents = listData;
}

int SLNode::getContents () const {
    return contents;
}

SLNode* SLNode::getNextNode () const {

    return nextNode;
    
}