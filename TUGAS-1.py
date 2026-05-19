data = []

print("=== PROGRAM DATA SEDERHANA ===")

while True:
    print("\nMENU")
    print("1. Tambah Data")
    print("2. Tampilkan Data")
    print("3. Keluar")

    pilihan = input("Pilih menu (1/2/3): ")

    if pilihan == "1":
        jumlah = int(input("Berapa data yang ingin dimasukkan? "))

        for i in range(1, _____ + 1):
            nilai = input(f"Masukkan data ke-{i}: ")
            data._____(nilai)

        print("Data berhasil ditambahkan")

    elif pilihan == "2":
        if len(data) == 0:
            print("Data masih kosong")
        else:
            print("Isi Data:")
            for i in range(len(data)):
                print(f"Data ke-{i+1} :", data[i])

    elif pilihan == "3":
        print("Program selesai")
        _____

    else:
        print("Pilihan tidak tersedia")