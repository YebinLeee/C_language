#include <stdio.h>

int main(void)
{
	int time, age;
	int fee;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf_s("%d %d", &time, &age);

	if (time <= 17)
	{
		if ((age >= 3 && age <= 12) || age >= 65)
			fee = 25000;
		else
			fee = 34000;
	}
	else
		fee = 10000;

	printf("����� %d�Դϴ�. \n", fee);
		
	return 0;
}