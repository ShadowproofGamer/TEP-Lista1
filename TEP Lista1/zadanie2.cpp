bool b_alloc_table_2_dim(int** piTable, int iSizeX, int iSizeY) {
	if (iSizeX<=0 || iSizeY<=0)
	{
		return false;
	}
	/*
	* int** new_XY_table;
	new_XY_table = new int* [iSizeX];
	for (int i = 0; i < iSizeX; i++)
	{
		new_XY_table[i] = new int[iSizeY];
	}
	piTable = &new_XY_table;
	*/
	piTable = new int* [iSizeX];
	for (int i = 0; i < iSizeX; i++)
	{
		piTable[i] = new int[iSizeY];
	}
	return true;
}
