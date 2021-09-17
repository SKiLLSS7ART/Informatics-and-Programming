#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "russian");
	
	float x1, x2, y1, y2, r1, r2;
	float d;
	
	printf("введите радиус и координаты первого круга(x,y,r)");
	scanf_s("%f %f %f", &x1, &y1, &r1);

	printf("введите радиус и координаты первого круга(x,y,r)");
	scanf_s("%f %f %f", &x2, &y2, &r2);

	
	d = sqrt(pow(x2 - x1, 2) + (y2 - y1, 2));


	if (d == r1 + r2) { 
		printf("окружности касаются");
		

	}
	else
	if (d < r1 + r2) {



		if (d == 0 && r1 == r2) {
			printf("окружности совпадают");
		}
		else if (d + r1 < r2 || d + r2 < r1) {
			printf("одна лежит внутри другой");

		}
		else {
			printf("окружности пересекаются");
		}
	}

	
	else
	if (d > r1 + r2) {
		printf("окружности не связаны");
	}
	
	return 0;
}