#ifndef _ItemType_H
#define _ItemType_H
class ItemType {
	int value;
	int line; // line of item to save
public:
	int getValue() { return value; };
	int getLine() { return  line; };

	void setValue(int _val) { value = _val; }
	void setLine(int _line) { line = _line; }
};

#endif
