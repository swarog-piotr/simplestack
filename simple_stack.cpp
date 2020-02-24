// simple_stack.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Stack.h"

using std::cout;
using std::endl;
int main()
{
    cout << "Hello World!\n";

	Stack myStack;

	cout << "Is my stack empty? " << myStack.is_empty() << endl;

	myStack.push(13);
	myStack.push(33);
	myStack.push(66);
	myStack.push(444);
	myStack.push(6);
	if (myStack.push(66));
	else cout << "Couldnt push, its full\n";

	cout << "\nLets see the stack:\n";
	myStack.view_stack();
	
	cout << "\nPop some values\n";
	unsigned long value = 8;
	myStack.pop(value);
	unsigned long  value2 = 0;
	myStack.pop(value2);
	cout << value  << " " << value2 << "\n";
	
	cout << "\nNow, lets see the stack again:\n";
	myStack.view_stack();

	


	system("pause");
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
