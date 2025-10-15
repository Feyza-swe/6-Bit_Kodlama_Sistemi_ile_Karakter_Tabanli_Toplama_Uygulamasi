# 💻 Karakter Tabanlı Toplama Simülasyonu (6-Bit Kodlama Bağlamı)

Bu proje, C dilinde yazılmış basit bir konsol uygulamasıdır. Kullanıcıdan girdiği iki tek haneli rakamı (karakter olarak) okur, sayısal karşılıklarını bulur ve toplar. Program, özellikle **Unix öncesi ve 6-Bit kodlama sistemlerinin** kısıtlamalarını modelleyerek, toplamın tek haneli (yani en fazla 9) olmasını zorunlu kılar.

## 🌟 Projenin Amacı ve Bağlamı

Bu programın temel amacı, iki önemli kavramı göstermektir:

1.  **C'de Karakter-Sayısal Dönüşüm:** ASCII kodlama tablosu kullanılarak, bir karakterin ('0' - '9') nasıl temsil ettiği sayısal değere (`int`) dönüştürüldüğünü uygulamalı olarak göstermek.
2.  **Sistem Kısıtlaması Simülasyonu:** Eski, kaynakları kısıtlı bilgisayar sistemlerinde (özellikle 6-bit kodlamanın yaygın olduğu dönemler) veri işleme ve depolama sınırlamalarının nasıl yönetildiğini modellemek.

## ⚙️ Teknik Detaylar

### 1. ASCII Dönüşüm Mekanizması

Programın kalbi, karakterleri sayıya çevirme işleminde yatmaktadır:

```c
sayi1 = rakam1 - '0';
```

Klavyeden girilen '5' gibi bir karakter, bellekte 53 (ASCII değeri) olarak saklanır.

'0' karakterinin ASCII değeri ise 48'dir.

'5' - '0' işlemi aslında 53 - 48 anlamına gelir ve sonuç olarak bize beklediğimiz sayısal değer olan 5'i verir.

### 2. Kısıtlama Mekanizması

Program, toplama sonucunu kontrol ederek, sonucu 9'dan büyük bir değer olduğunda hata verir ve eski sistemlerin tek haneli depolama veya işlem limitlerine gönderme yapar.
```c
if(toplam > 9) {
    // Hata: Kısıtlı sistemi aştı.
}
```
# 🚀 Kurulum ve Çalıştırma

Bu C programını çalıştırmak için sisteminizde bir C derleyicisi (örneğin GCC) bulunmalıdır.

Adımlar

### 1. Kodu Kaydetme: Yukarıdaki kodu toplayici.c gibi bir dosyaya kaydedin.

### 2. Derleme: Komut satırında (terminal) kodu derleyin:

```bash
gcc toplayici.c -o toplayici
```

### 3.Çalıştırma: Programı çalıştırın:

```bash
./toplayici
```
