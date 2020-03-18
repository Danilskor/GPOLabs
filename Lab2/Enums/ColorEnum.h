#pragma once

enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	LightBlue,
	Purple
};

void WriteColor(Color color);
Color ReadColor();
int CountRed(Color* color, int count);
int CountColor(Color* color, int count, Color findedColor);