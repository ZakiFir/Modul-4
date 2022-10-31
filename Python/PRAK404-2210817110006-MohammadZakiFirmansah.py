while True :
    print("Pilih program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit")
    prog = int(input("Masukkan Pilihan: "))
    if prog == 5 :
        print("Terimakasih, telah menggunakan kalkulator Mohammad Zaki Firmansah")
        break
    elif prog > 5 :
        print("Input anda salah, silahkan coba lagi")
        continue
    else :
        n1 =float(input("Masukkan nilai pertama: "))
        n2 =float(input("Masukkan nilai kedua: "))
        if prog == 1 :
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f"% (n1, n2, n1+n2))
        elif prog == 2 :
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f"% (n1, n2, n1-n2))
        elif prog == 3 :
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f"% (n1, n2, n1*n2))
        elif prog == 4 :
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f"% (n1, n2, n1/n2))