#include <stdio.h>

// Daha basit karakter kontrolü
int gecerliRakamMi(char c) {
    if(c >= '0' && c <= '9') {
        return 1; // geçerli
    }
    return 0; // geçersiz
}

int main() {
    char rakam1, rakam2;
    int sayi1, sayi2, toplam;
    
    printf("6-Bit Kodlama - Karakter Tabanli Toplama\n");
    printf("=========================================\n");
    printf("Iki tek haneli rakam toplayici\n\n");
    
    // Birinci rakam
    printf("Birinci rakam (0-9): ");
    scanf(" %c", &rakam1);
    
    // Kontrol
    if(!gecerliRakamMi(rakam1)) {
        printf("HATA: '%c' gecersiz karakter! Sadece 0-9 girin.\n", rakam1);
        return 1;
    }
    
    // İkinci rakam
    printf("Ikinci rakam (0-9): ");
    scanf(" %c", &rakam2);
    
    // Kontrol
    if(!gecerliRakamMi(rakam2)) {
        printf("HATA: '%c' gecersiz karakter! Sadece 0-9 girin.\n", rakam2);
        return 1;
    }
    
    // Karakterleri sayıya çevir
    sayi1 = rakam1 - '0';
    sayi2 = rakam2 - '0';
    toplam = sayi1 + sayi2;
    
    printf("\n--- ISLEM SONUCU ---\n");
    printf("Girilen: '%c' ve '%c'\n", rakam1, rakam2);
    printf("Sayisal: %d ve %d\n", sayi1, sayi2);
    printf("Toplam: %d\n", toplam);
    
    // Sonuç kontrolü
    if(toplam > 9) {
        printf("\n*** HATA ***\n");
        printf("Toplam 9'u asti: %d > 9\n", toplam);
        printf("Unix oncesi sistem: Sonuc tek haneli olmali!\n");
        return 1;
    }
    else {
        printf("\n*** BASARILI ***\n");
        printf("Sonuc: %c + %c = %c\n", rakam1, rakam2, toplam + '0');
        printf("Sayisal sonuc: %d\n", toplam);
    }
    
    return 0;
}    
