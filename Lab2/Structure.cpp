#include "Square.h"

using namespace std;

#ifdef max
#undef max
#endif

void DemoSquare()
{
	//2.2.3.1
	Square square;
	square.Color = "Красный";
	square.Length = 5;
	square.Width = 9;

	//2.2.3.2
	Square squareInputValue;
	cout << "Введите параметры прямоугольника:" << endl;

	cout << "Введите цвет прямоугольника: ";
	getline(cin, squareInputValue.Color);

	cout << "Введите длину прямоугольника (положительное число): " 
		<< endl << '>';
	cin >> squareInputValue.Length;

	cout << "Введите ширину прямоугольника (положительное число):" 
		<< endl << '>';
	cin >> squareInputValue.Width;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Цвет прямоугольника: " << squareInputValue.Color 
		<< ", размеры: " << squareInputValue.Length << 'x' 
		<< squareInputValue.Width << endl << endl;

	//2.2.3.3
	Square* arraySquares = new Square[3];
	arraySquares[0].Color = "Белый";
	arraySquares[0].Length = 12;
	arraySquares[0].Width = 3;

	arraySquares[1].Color = "Синий";
	arraySquares[1].Length = 32;
	arraySquares[1].Width = 2;

	arraySquares[2].Color = "Крассный";
	arraySquares[2].Length = 22;
	arraySquares[2].Width = 8;

	for (int i = 0; i < 3; i++)
	{
		cout << "Прямоугольник " << i << " цвет - " << arraySquares[i].Color 
			<<", размер - : " << arraySquares[i].Length << 'x' 
			<< arraySquares[i].Width << endl;
	}
	cout << endl;
	delete[] arraySquares;

	//2.2.4.1
	Square* pointerSquare = &square;
	cout << "Task_2.2.3.1 прямоугольник:" << endl << "Цвет " << pointerSquare->Color 
		<<", размеры " << pointerSquare->Length << 'x' << pointerSquare->Width << endl;
	pointerSquare->Color = "Фиолетовый";
	pointerSquare->Length = 13,5;
	pointerSquare->Width = 11;

	//2.2.4.2
	Square* secondPointer = &square;
	cout << endl << "Адрес первого указателя: " << pointerSquare 
		<< endl << "Адрес второго указателя: " << secondPointer << endl;

	//2.2.5.4
	cout << endl << "Task_2.2.5.4." << endl;
	WriteSquare(square);
	WriteSquare(squareInputValue);
	Exchange(square, squareInputValue);
	cout << "После перестановки:" << endl;
	WriteSquare(square);
	WriteSquare(squareInputValue);
}