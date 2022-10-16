#include <iostream>

void v_alloc_table_fill_34(int iSize) {
	if (iSize<=0)
	{
		std::cout << "Could not allocate the table: 'Wrong table size'\n";
		return;
	}
	int *table_filled;
	table_filled = new int[iSize];
	for (int i = 0; i < iSize; i++) {
		table_filled[i] = 34;
	}
	for (int i = 0; i < iSize; i++)
	{
		std::cout << table_filled[i]<<" ";
	}
	delete[] table_filled;
}
