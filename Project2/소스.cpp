#include <stdio.h>

typedef enum {
	QUARDRANT_ONE,
	QUARDRANT_TWO,
	QUARDRANT_THREE,
	QUARDRANT_FOUR
};

int main(void) {

	char quardrant[][8] = { "1사분면","2사분면","3사분면","4사분면" };

	int h[4] = { 45, 135, 225, 315 };	// 1사분면, 2사분면, 3사분면, 4사분면

	int w[8] = { 20, 60, 110, 150, 200, 240, 290, 330};

	// 경우의 수 총 16개

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 8; j++) {

			int result = (w[j] - h[i] + 360) % 360;

			printf("Heading[%d도], WayPoint[%d도] 일때 결과값 %d\n", h[i], w[j], result);

			if ((result >= 350) || (result < 10))
				printf("회전 안함\n");
			else if ((result >= 180) && (result < 350))
				printf("좌회전\n");
			else if ((result >= 10) && (result < 180))
				printf("우회전\n");

		}
	}



	return 0;
}