#include "include/punkt_4.h"

bool Card::Flip()
{
	_titleCard = !_titleCard;
	return _titleCard;
}

int Card::GetValue()
{
	return (int)_valueCard;
}