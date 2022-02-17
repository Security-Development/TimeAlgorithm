#define _WIN32_WINNT_WIN10 

#include <stdio.h>
#include <windows.h>

int main() {	
	int n, result = 0;
	
	scanf("%d", &n);
	
	for(int h = 0; h <= n; h++) {
		for(int m = 0; m < 60; m++) {
			for(int s = 0; s < 60; s++) {
				if( h % 10 == 3 || h / 10 == 3 || 
					m % 10 == 3 || m / 10 == 3 ||
					s % 10 == 3 || s / 10 == 3){
					++result;
				}
			}
		}
	}
	
	
	printf("%d", result);
	
	
	return 0;
}