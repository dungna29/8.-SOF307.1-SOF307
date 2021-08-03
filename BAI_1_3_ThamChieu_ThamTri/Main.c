#include <stdio.h>
/*
 * Truyền giá trị (Tham trị)
 * Truyền tham trị là truyền giá trị của biến (không phải là địa chỉ ô nhớ), khi đó phương thức sẽ tự động tạo ra một địa chỉ ô nhớ mới để lưu trữ giá trị này, do đó nó chỉ được thay đổi trong phương thức hiện hành và giá trị của biến không bị thay đổi bên ngoài phương thức hiện hành.
 */
void HoanViThamTri(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("KQ ben trong HoanViThamTri sau khi hoan vi tham tri \n");
	printf("a = %d \n", a);
	printf("b = %d \n", b);
}
/*
 * Truyền giá trị (Tham Chiếu)
 * Truyền tham chiếu là truyền địa chỉ ô nhớ của biến, do đó khi thay đổi giá trị của biến bên trong phương thức thì giá trị của biến cũng bị thay đổi bên ngoài phương thức.
 */
void HoanViThamChieu(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
}

int main()
{
	int a = 3, b = 9;
	HoanViThamTri(a, b);
	printf("Ket qua sau khi hoan vi tham tri \n");
	printf("a = %d \n", a);
	printf("b = %d \n", b);
	
	HoanViThamChieu(&a, &b);
	printf("Ket qua sau khi hoan vi tham chieu \n");
	printf("a = %d \n", a);
	printf("b = %d \n", b);
}