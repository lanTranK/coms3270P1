#include "pointcloud.h"

void stat1() {
	float x = 0;
	float y = 0;
	float h = 0;
	float sum = 0;
	float min_h = INFINITY;
	float max_h = -INFINITY;
	int count = 0;

	while (scanf_s("%f %f %f", &x, &y, &h) == 3) {
		if (min_h > h) {
			min_h = h;
		}
		if (max_h < h) {
			max_h = h;
		}
		count++;
		sum += h;
		printf("%f %f %f\n", x, y, h);
	}

	printf("Min: %lf, Max: %lf, Average: %lf", min_h, max_h, sum / count);

}

int main() {
	stat1();
	return 0;
}