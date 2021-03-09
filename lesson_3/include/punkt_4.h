#pragma once

#include <iostream>
using namespace std;

enum class Suit
{
	spades = 0,
	clubs,
	diamonds,
	hearts
};

enum class ValueCard
{
	_2 = 2,
	_3,
	_4,
	_5,
	_6,
	_7,
	_8,
	_9,
	_10,
	_V = 10,
	_Q = 10,
	_K = 10,
	_A = 1
};

class Card
{
	private:
		Suit suit;
		ValueCard valueCard;
		bool titleCard;
	public:
		void Flip();
		int GetValue(ValueCard valCard);

};