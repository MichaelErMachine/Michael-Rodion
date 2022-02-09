n = int(input("Input amount of elements"))

b = set()
for i in range(n):
    a = int(input())
    b.add(a)


print(b)
b.clear()
print(b)
