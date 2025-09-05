	#include <stdio.h>
	
	int doDaiChuoi(char s[]) {
	    int len = 0;
	    while (s[len] != '\0') {
	        len++;
	    }
	    return len;
	}
	
	int timChuoiCon(char s1[], char s2[]) {
	    int n1 = doDaiChuoi(s1);
	    int n2 = doDaiChuoi(s2);
	
	    for (int i = 0; i <= n1 - n2; i++) {
	        int j;
	        for (j = 0; j < n2; j++) {
	            if (s1[i + j] != s2[j]) {
	                break;
	            }
	        }
	        if (j == n2) {
	            return 1; 
	        }
	    }
	    return 0;
	}
	
	int main(){
	    char S1[100], S2[100];
	
	    printf("Nhap chuoi thu nhat: ");
	    scanf("%s", S1);
	
	    printf("Nhap chuoi thu hai: ");
	    scanf("%s", S2);
	
	    int len1 = doDaiChuoi(S1);
	    int len2 = doDaiChuoi(S2);
	
	    if (len1 < len2) {
	        if (timChuoiCon(S2, S1))
	            printf("Yes\n");
	        else
	            printf("No\n");
	    } else {
	        if (timChuoiCon(S1, S2))
	            printf("Yes\n");
	        else
	            printf("No\n");
	    }
	}

