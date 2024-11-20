#include <stdio.h>

int main() {
    
    // Kieu du lieu int (so nguyen)
    int a = 130;        
	// Khai bao va khoi tao bien a kieu int, gia tri la 10
    int b = -20 ;       
	// Khai bao va khoi tao bien b kieu int, gia tri la -5
    printf("a = %d, b = %d\n", a, b);  
	// In ra gia tri cua a va b

    // Kieu du lieu float (so thuc voi do chinh xac don)
    float x = 3.14f;    
	// Khai bao va khoi tao bien x kieu float, gia tri la 3.14
    float y = -10.1 ;   
	// Khai bao va khoi tao bien y kieu float, gia tri la -2.7
    printf("x = %.2f, y = %.2f\n", x, y);  
	// In ra gia tri cua x va y voi 2 chu so sau dau phay

    // Kieu du lieu double (so thuc voi do chinh xac kep)
    double pi = 3.14159265359;  
	// Khai bao va khoi tao bien pi kieu double, gia tri la so pi voi do chinh xac cao
    double e = 2.71828182846;   
	// Khai bao va khoi tao bien e kieu double, gia tri la hang so Euler
    printf("pi = %.10lf, e = %.10lf\n", pi, e);  
	// In ra gia tri cuaa pi va e voi 10 chu so sau dau phay

    // Kieu du lieu char (ky tu don)
    char letter = 'A';  
	// Khai bao va khoi tao bien letter kieu char, gia tri la ky tu 'A'
    char symbol = '$';  
	// Khai bao va khoi tao bien symbol kieu char, giá tri la ky tu '$'
    printf("letter = %c, symbol = %c\n", letter, symbol);  
	// In ra gia tri cua letter va symbol

    return 0;
}
