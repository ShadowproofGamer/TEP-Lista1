#include <iostream>

//function for ex1
void v_alloc_table_fill_34(int iSize) {
	if (iSize <= 0)
	{
		std::cout << "Could not allocate the table: 'Wrong table size'\n";
		return;
	}
	int* table_filled;
	table_filled = new int[iSize];
	for (int i = 0; i < iSize; i++) {
		table_filled[i] = 34;
	}
	for (int i = 0; i < iSize; i++)
	{
		std::cout << table_filled[i] << " ";
	}
	delete[] table_filled;
}


//function ex2
bool b_alloc_table_2_dim(int **&piTable, int iSizeX, int iSizeY) {
	if (iSizeX <= 0 || iSizeY <= 0)
	{
		return false;
	}
		
	piTable = new int* [iSizeX];
	for (int i = 0; i < iSizeX; i++)
	{
		piTable[i] = new int[iSizeY];
	}
	
	
	return true;
}

//function ex3
bool b_dealloc_table_2_dim(int**& piTable, int iSizeX, int iSizeY) {
	if (iSizeX <= 0 || iSizeY <= 0 || piTable==NULL)
	{
		return false;
	}

	for (int i = 0; i < iSizeX; i++)
	{
		delete[] piTable[i];
	}
	delete[] piTable;
	piTable = nullptr;

	return true;
}

//class ex4


int main() {
	//zad1
	int size;
	std::cout << "Write table size: ";
	std::cin >> size;
	v_alloc_table_fill_34(size);

	//zad2
	int** pi_table;
	std::cout<<"\n"<<b_alloc_table_2_dim(pi_table, 5, 3);
	pi_table[1][0] = 3;
	std::cout << "\n" << pi_table[1][0];
	
	//zad3
	std::cout << "\n" << b_dealloc_table_2_dim(pi_table, 5, 3);
	std::cout << "\n" << pi_table;


	//end
	return 0;
}