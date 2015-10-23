/*
Challenge 17 header file
Chad Durkin
10/22/15
*/

#pragma once
#include <iostream>
using namespace std;
class SLNode {

	public:

		SLNode ();
		
		SLNode (int listData);
		
		~SLNode ();
		
		void setContents (int listData);
		
		int getContents () const;
		
		SLNode* getNextNode () const;
		
	private:
	
		SLNode* nextNode;
		
		int contents;
		
};

		