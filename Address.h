#ifndef __Name__Address__
#define __Name__Address__

#include <stdio.h>
#include "WCS_String.h"

#include <iostream>

using namespace std;

class Address
{
public:
    Address		();
    Address		(const Address &);
    Address		(const WCS_String &, const WCS_String &, const WCS_String &);
    
    ~Address         ();
    Address &			Copy		(const Address &);
    const WCS_String &	GetStreet	() const;
    const WCS_String &	GetCity 	() const;
    const WCS_String &	GetState	() const;
    const WCS_String &  	GetZip      	() const;
    bool			SetStreet	(const WCS_String &);
    bool			SetState	(const WCS_String &);
    bool			SetCity 	(const WCS_String &);
    bool                	SetZip      (const WCS_String &);
    Address &			operator =	(const Address &);
    bool			operator ==	(const Address &) const;
    bool			operator <	(const Address &) const;
    
private:
    WCS_String		Street;
    WCS_String		City;
    WCS_String		State;
    WCS_String      Zip;
};

ostream & operator << (ostream &, const Address &);

inline Address & Address::Copy (const Address & A)
{
    //	return operator = (N);
    return (*this) = A;
    //	return *this;
}

inline const WCS_String & Address::GetStreet () const
{
    return Street;
}

inline const WCS_String & Address::GetState () const
{
    return State;
}

inline const WCS_String & Address::GetCity () const
{
    return City;
}

inline const WCS_String & Address::GetZip() const
{
    return Zip;
}

inline bool Address::SetStreet (const WCS_String & S)
{
    Street	= S;
    return true;
}

inline bool Address::SetState (const WCS_String & L)
{
    State	= L;
    return true;
}

inline bool Address::SetCity (const WCS_String & C)
{
    City	= C;
    return true;
}

inline bool Address::SetZip (const WCS_String & S)
{
    Zip	= S;
    return true;
}

#endif
