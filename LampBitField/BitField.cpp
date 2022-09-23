#pragma once
#include "BitField.h"

int BitField::GetMemIndex(const int n) const
{
	return n >> 5;
}

TELEM BitField::GetMemMask(const int n) const
{
	return 1 << (n & 31);
}

void BitField::SetBit(const int n)
{
	if ((n > -1) && (n < Bitlen))
	{
		pMem[GetMemIndex(n)] &= GetMemMask(n);
	}
}

BitField::BitField(int len): Bitlen(len)
{
	
	MemLen = (len + 31) >> 5;
	pMem = new TELEM[MemLen];
	if (pMem != 0)
	{
		for (int i = 0; i < MemLen; i++)
		{
			pMem[i] = 0;
		}
	}

}

void BitField::GetBit(const int n)
{
	if ((n > -1) && (n < Bitlen))
		return GetMemMask(n) && pMem(GetMemIndex(n));
}
