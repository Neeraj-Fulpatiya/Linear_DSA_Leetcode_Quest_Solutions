/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	  
	}
	
    
	int peek() {
        Iterator temp = (*this); //taking a new iterator and storing the current value
        return temp.next();//return the next of that iterator
	}
	
	 
	int next() {
	    return Iterator::next();
	}
	
	bool hasNext() const {
	    return Iterator::hasNext(); 
	}
};