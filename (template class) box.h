
#ifndef BOX_h
#define BOX_h

template <class itemtype>

class hopefulbox {
private:
    itemtype item;
    
public:
    hopefulbox();
    hopefulbox(const itemtype& theitem);
    void setitem(const itemtype& theitem);   //Data type is constant
    itemtype getitem() const;                //Function is constant
};

#endif

