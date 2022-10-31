ak1, ak2 = input().split()
ak1 = int(ak1)
ak2 = int(ak2)
if ak1 < ak2:
    for i in range(ak1, ak2):
        print(ak1, ak2, end=' - ')
        ak1 += 1
        ak2 -= 1
        continue
    print(ak1, ak2, end='  ')
    ak1 += 1
    ak2 -= 1
else:
    if ak1 > ak2:
        n = ak1
        n1 = ak2
        for i in range(ak2, ak1):
            print(ak1, ak2, end= ' - ')
            ak1 -= 1
            ak2 += 1
            if ak1 % n1 == 1:
                break
    if ak1 < ak2:
        for i in range(ak1, ak2):
            print(ak1, ak2, end=' - ')
            ak1 -= 1
            ak2 += 1
            break
        print(ak1, ak2, end= ' ')
        ak1 -= 1
        ak2 += 1