#include <stdio.h>
void Bai1_KhaiBaoMang()
{
	/*1. Công thức khai báo
	 *<Kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1, giá trị 2....};
	 *<Kiểu dữ liệu> <arr + tên mảng>[Kích thước mảng số nguyên];
	*/

	//2. Khai báo
	double arrDiem[] = { 8.6,5.0,7.2 };
	int arrTemp[5];//Khởi tạo 1 mảng có 5 phần tử

	//3. Lấy giá trị trong mảng - index
	int arrNumber[] = { 5,9,8,7 };
	printf("Gia tri tai index 0 = %d", arrNumber[0]);

	//4. In nhiều giá trị của mảng ra màn hình
	for (int i = 0; i < 4; i++)
	{
		printf(" Gia tri tai index %d = %d", i, arrNumber[i]);
	}
}
void Bai2_ThuatToanNoiBot()
{
	int arrNumber[] = { 35,27,36,33,55,11 };
	for (int i = 0; i < 6; i++)
	{
		printf(" %d ", arrNumber[i]);
	}
	//Liệt kê tất cả các bước thực hiện thuật toán như tại i bằng bao nhiêu và j bằng bao nhiêu cho đến khi kết thúc bằng Word || Excel với dãy số (35,27,36,33,55,11)
	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = i + 1 ; j < 6; j++)
	// 	{
	// 		if (arrNumber[i]> arrNumber[j])
	// 		{
	// 			int temp = arrNumber[i];
	// 			arrNumber[i] = arrNumber[j];
	// 			arrNumber[j] = temp;
	// 		}
	// 	}
	// }

	
	//2 Cách học 1 thuật toán: Bút và giấy, Triển khai Excel, Word...,In từng bường trong thuật toán trên code
	for (int i = 0; i < 5; i++)
	{
		printf("Lan Chay Thu i = %d \n",i);
		printf("Gia Tri tai vi tri %d \n", arrNumber[i]);
		for (int j = i +1; j < 6; j++)
		{
			printf("Gia tri arrNumb[i] = %d > arrNumb[j] = %d \n", arrNumber[i], arrNumber[j]);
			if (arrNumber[i] > arrNumber[j])
			{
				int temp = arrNumber[i];
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
			for (int i = 0; i < 6; i++)
			{
				printf("%d ", arrNumber[i]);
			}
			printf("\n");
		}
		printf("Sau khi sap xep o lan chay thu %d \n",i);
		for (int i = 0; i < 6; i++)
		{
			printf("%d ", arrNumber[i]);
		}
	}
	printf("Sau khi Sort: ");
	for (int i = 0; i < 6; i++)
	{
		printf(" %d ", arrNumber[i]);
	}
}
int main()
{
	Bai2_ThuatToanNoiBot();
}