/**
* @authors Bernardo Cobos, Dong Jae Shin
* @date 12/6/18 - 12/8/18
* Design and implementation of operator[] functionality fot a Binary Search Tree
* Input: Unique strings to put into a Binary Search Tree
* Output: Those strings, in their lexicographical order
*/

#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {
	/*
	int numb = 0;

	BinaryTree tree;
	cout << "Insert how many strings to put into the BST:" << endl;
	cin >> numb;
	string name;
	for (int i = 0; i < numb; ++i) {
		cout << "Insert name:" << endl;
		cin >> name;
		tree.insertNode(name);
	}
	int index;
//	cout << "Which index are you looking for: " << endl;
//	cin >> index;
//	cout << "String at index " << index << ": " << tree[index] << endl;
	cout << "The contents of the Binary Search Tree in order are: " << endl;
	for (index = 0; index < numb; ++index)
		cout << tree[index] << endl;
	cout << endl << "Now I, the computer, am going to attempt to access elements that I shouldn't. " << endl;
	cout << "Attempting to access element -2: " << endl;
	try {
		cout << tree[-2] << endl;
	}
	catch (BinaryTree::IndexOutOfBoundsException exc) {
		cout << exc.getMessage() << endl;
	}
	cout << endl << "Attempting to access an index that is too big: " << endl;
	try {
		cout << tree[numb + 3] << endl;
	}
	catch (BinaryTree::IndexOutOfBoundsException exc) {
		cout << exc.getMessage() << endl;
	}
	*/

	int sizeOfBST = 15;
	BinaryTree BST = BinaryTree();
	BST.insertNode("Larry Doering");
	cout << "After one insert, we have..." << endl;
	cout << "The width of the tree is: " << BST.getMaxWidth() << endl;
	cout << "The height of the tree is: " << BST.getHeight() << endl;
	cout << "The number of nodes currently in the tree is: " << BST.countNodes() << endl << endl;

	BST.insertNode("Grant Stoltz");
	BST.insertNode("Randy Kerdun");
	cout << "After three inserts, we have..." << endl;
	cout << "The width of the tree is: " << BST.getMaxWidth() << endl;
	cout << "The height of the tree is: " << BST.getHeight() << endl;
	cout << "The number of nodes currently in the tree is: " << BST.countNodes() << endl << endl;

	BST.insertNode("Dennis Miller");
	BST.insertNode("Kerry Tomei");
	BST.insertNode("Nancy Reagan");
	BST.insertNode("Veronica Mars");
	BST.insertNode("Bianca Bjorn");
	cout << "After eight inserts, we have..." << endl;
	cout << "The width of the tree is: " << BST.getMaxWidth() << endl;
	cout << "The height of the tree is: " << BST.getHeight() << endl;
	cout << "The number of nodes currently in the tree is: " << BST.countNodes() << endl << endl;

	BST.insertNode("Francine Hoffman");
	BST.insertNode("Helene Black");
	BST.insertNode("Kooper Sloan");
	BST.insertNode("Monica Faber");
	BST.insertNode("Oprah Winnona");
	BST.insertNode("Paula Abdul");
	BST.insertNode("Sandra Day O'Connor");
	cout << "After fifteen inserts, we have..." << endl;
	cout << "The width of the tree is: " << BST.getMaxWidth() << endl;
	cout << "The height of the tree is: " << BST.getHeight() << endl;
	cout << "The number of nodes currently in the tree is: " << BST.countNodes() << endl << endl;

	cout << endl << "Completed successfully" << endl;
	//TODO: delete:
	system("PAUSE");
} //end of main
