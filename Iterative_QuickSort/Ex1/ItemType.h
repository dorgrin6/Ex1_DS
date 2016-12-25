#ifndef _ItemType_H
#define _ItemType_H

enum LINE { START, AFTER_FIRST, AFTER_SECOND };
class ItemType {
	int left; //left index of array
	int right; //right index of array
	int pvt; //pivot index of array
	LINE line; // line of item to save
public:
	//Empty CTOR
	ItemType() {};
	//CTOR
	ItemType(int _left, int _right, int _pvt, LINE _line) : left(_left), right(_right), pvt(_pvt), line(_line) {}
	//getLeft: return the left index of array
	int getLeft() const { return left; }
	//getRight: return the right index of array
	int getRight() const { return right;  }
	//getPivot: return the pivot index of array
	int getPivot() const { return pvt; }
	//getLive: return the line of item
	LINE getLine() const { return  line; };
	//setLeft: sets the left index of array
	void setLeft(int _left) { left = _left; }
	//setRight: sets the left index of array
	void setRight(int _right) { right = _right; }
	//setPivot: sets the pivot index of array
	void setPivot(int _pvt) { pvt = _pvt; }
	//setLine: sets the line of item
	void setLine(LINE _line) { line = _line; }
};

#endif
