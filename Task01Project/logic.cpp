// Task 01 [The sum I]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от 1 до N.
// //best O(1)
//worst O(N^2)

#include "logic.h"

int sum(int number) {
	if (number < 0) {
		return -1;
	}

	if (number == 0) {
		return 0;
	}

	return number + sum(number - 1);
}