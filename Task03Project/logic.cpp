// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.
//best O(1)
//worst O(N)

#include "logic.h"

int sum(int n, int m) {
	
	if (n == -m) {
		return 0;
	}
	
	return m + sum(n, m - 1);
}