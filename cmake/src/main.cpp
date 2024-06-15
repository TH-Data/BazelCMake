//#include <zephyr.h>
//#include <sys/printk.h>
#include <stdio.h>
#include "calculationMachine.hh"

int main() {
	while(1) {
		CalculationMachine machine = CalculationMachine();
		printf("Sum of 5 and 3 = %d\n", machine.sum(5, 3));
	}
}
