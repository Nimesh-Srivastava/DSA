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
    
    int peekElement;
    bool hasPeeked;
    
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        hasPeeked = false;
	}
	
	int peek() {
        peekElement = hasPeeked ? peekElement : Iterator :: next();
        hasPeeked = true;
        
        return peekElement;
	}
	
	int next() {
	    int nextElement = hasPeeked ? peekElement : Iterator :: next();
	    hasPeeked = false;
        
	    return nextElement;
	}
	
	bool hasNext() const {
	    return hasPeeked || Iterator :: hasNext();
	}
};
