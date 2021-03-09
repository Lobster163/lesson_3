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
		Suit _suit;
		ValueCard _valueCard;
		bool _titleCard;
	public:
		Card() : _suit(Suit::clubs), _valueCard(ValueCard::_2), _titleCard(false) {};
		Card(ValueCard valueCard, Suit suit) : _valueCard(valueCard), _suit(suit), _titleCard(false) {};
		bool Flip();
		int GetValue();

};