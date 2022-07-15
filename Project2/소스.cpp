#include <stdio.h>

typedef enum {
	QUARDRANT_ONE,
	QUARDRANT_TWO,
	QUARDRANT_THREE,
	QUARDRANT_FOUR
};

int main(void) {

	char quardrant[][8] = { "1��и�","2��и�","3��и�","4��и�" };

	int h[4] = { 45, 135, 225, 315 };	// 1��и�, 2��и�, 3��и�, 4��и�

	int w[8] = { 20, 60, 110, 150, 200, 240, 290, 330};

	// ����� �� �� 16��

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 8; j++) {

			int result = (w[j] - h[i] + 360) % 360;

			printf("Heading[%d��], WayPoint[%d��] �϶� ����� %d\n", h[i], w[j], result);

			if ((result >= 350) || (result < 10))
				printf("ȸ�� ����\n");
			else if ((result >= 180) && (result < 350))
				printf("��ȸ��\n");
			else if ((result >= 10) && (result < 180))
				printf("��ȸ��\n");

		}
	}



	return 0;
}