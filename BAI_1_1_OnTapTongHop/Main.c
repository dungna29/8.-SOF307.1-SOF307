#include <stdio.h>
#include <string.h>
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
		printf("Lan Chay Thu i = %d \n", i);
		printf("Gia Tri tai vi tri %d \n", arrNumber[i]);
		for (int j = i + 1; j < 6; j++)
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
		printf("Sau khi sap xep o lan chay thu %d \n", i);
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

void Bai3_VongLap()
{
	int arrNumber[] = { 9,8,6,7,5 };
	//1. Vòng lặp for
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("%d ", arrNumber[i]);
	// }

	//2. While
	// int i = 0;
	// while (i < 5)
	// {
	// 	printf("%d ", arrNumber[i]);
	// 	i++;
	// }

	//3. Do While
	// int i = 0;
	// do
	// {
	// 	printf("%d ", arrNumber[i]);
	// 	i++;
	// }
	// while (i < 5);

	//In 1 bảng cửu chương sử dụng 3 kiểu vòng lặp For, While, Do While
	//3x1 =3
	//3x2 =6
	//3x3 =9
	// int i = 1;
	// do
	// {
	// 	printf(" %d x %d  = %d \n",3,i, 3*i);
	// 	i++;
	// } while (i < 10);

	//In full bảng cửu chương dùng While và Do While
	int i = 1;
	int j = 1;
	do
	{
		do
		{
			printf(" %d x %d  = %d \n", i, j, i * j);
			j++;
		} while (j < 10);
		j = 1;
		i++;
	} while (i < 10);
}
/*
 *Đệ quy trong C - Trong lập trình, một hàm được gọi là đệ quy nếu bên trong thân hàm có một lời gọi đến chính nó.
 *Hàm đệ quy luôn có điều kiện dừng được gọi là “điểm neo”. Khi đạt tới điểm neo, hàm sẽ không gọi chính nó nữa.
 */
void Bai4_DeQuy1(int diemBatDau)
{
	printf("Chao cac ban %d\n", diemBatDau);
	if (diemBatDau < 10)
	{
		diemBatDau++;
		Bai4_DeQuy1(diemBatDau);
	}
}
//Bài tập 4: Dùng đệ qui để in mảng dưới đây ra màn hình
void inMang1(int diemBatDau)
{
	int arrNumber[] = { 9,8,6,7,5 };
	printf("%d ", arrNumber[diemBatDau]);
	if (diemBatDau < 4)
	{
		diemBatDau++;
		inMang1(diemBatDau);
	}
}
void inMang2(int diemBatDau, int arrNumber[])
{
	printf("%d ", arrNumber[diemBatDau]);
	if (diemBatDau < 4)
	{
		diemBatDau++;
		inMang2(diemBatDau, arrNumber);
	}
}
//Bài 4.1: Viết 1 chương trình cho phép cộng tổng các số có trong 1 mảng
void BaiTap41(int arr[], int i, int leng, int kq) {
	if (i < leng)
	{
		kq = kq + arr[i];
		printf("\n%d", kq);
		i++;
		BaiTap41(arr, i, leng, kq);
	}
	printf("\t%d", kq);
}
void Bai4_TongCacSoArr(int arr[], int i, int kq)
{
	if (i < 5)
	{
		kq += arr[i];
		i++;
		Bai4_TongCacSoArr(arr, i, kq);
		if (i == 5)
		{
			printf("%d ", kq);
		}
	}
	
	//return kq;

}
/* struct trong lập trình C gọi là kiểu dữ liệu do người dùng tự định nghĩa
 * struct structureName
	{
		dataType member1;
		dataType member2;
		...
	};
 */
struct SinhVien
{
	int maSV;
	char ho[10];
	char ten[10];
	int gioiTinh;
};
int main()
{
	// int arrNumber[] = { 9,8,6,7,5 };	
	// Bai4_TongCacSoArr(arrNumber, 0, 0);
	//printf("Tong cac so: %d", );

	//Sử dụng Struct và khai báo với mỗi một 1 biến đại diện cho 1 đối tượng
	struct SinhVien sv1, sv2;
	strcpy_s(sv1.ho, 10, "Nguyen");
	printf("Ho SV %s", sv1.ho);
	printf("\n");
	//Gán họ vào cho sv2
	char arrC[6] = { 'H','O','A','N','G',0 };//Số 0 để ở cuối để kết thúc mảng
	for (int i = 0; i < 6; i++)
	{
		printf("%c ", arrC[i]);
	}

	//Lưu trữ nhiều hơn
	struct SinhVien sv[100];//Khai báo 1 mảng SinhVien có thể chứa 100 đối tượng.
	

}