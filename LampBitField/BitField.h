#pragma once

typedef unsigned int TELEM;

class BitField
{
	int Bitlen;
	int MemLen;
	TELEM* pMem;
	int GetMemIndex(const int n)const;
	TELEM GetMemMask(const int n) const;
public:
	void SetBit(const int n);
	BitField(int len);
	void GetBit(const int n)
};

