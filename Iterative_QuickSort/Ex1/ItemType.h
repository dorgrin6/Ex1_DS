#ifndef _ItemType_H
#define _ItemType_H


class ItemType {
	int value;
	int line; // line of item to save
public:
	int getValue() const { return value; };
	int getLine() const { return  line; };

	void setValue(int _val) { value = _val; }
	void setLine(int _line) { line = _line; }

	friend std::ostream& operator<<(std::ostream& os, const ItemType& item) {
		os << "Line:" << item.getLine() << " Value:" << item.getValue() << std::endl;
	}

};

#endif
