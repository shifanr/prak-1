#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const float PHI = 3.14;
	float r, luas, keliling;
	printf("=== Program Hitung Lingkaran ===\n");
 	printf("Masukkan jari-jari: ");
 	scanf("%f",&r);
 	
 	luas = PHI * r * r;
 	keliling = 2 * PHI * r;
 	
 	printf("Luas Lingkaran = %.2f\n", luas);
 	printf("Keliling Lingkaran = %.2f\n", keliling);
	return 0;
}