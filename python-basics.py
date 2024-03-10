print('Hello Python')
i = 0
print('i',i)
array = [1,2,3,4]
print('array ', array)
print('arr[0]', array[0])
print('arr[0 to 3]', array[0:3])
print('arr[:]', array[:])
print('arr[:2]', array[:2])
print('arr[2:2]', array[2:2])

str1 = 'hello baby'
print('str', str1)
print('str[4]', str1[4])
print('str[5:]', str1[5:])
print('type str', type(str1))
print('type int', type(i))

type_cast = str(i)
print('typcase ', type_cast , type(type_cast))
f = 12.890
type_cast1 = str(f)
print('typcase ', type_cast1)

x = 123
left_shift = x << 3 # g = x * 2^3
right_shift = x >> 3 # g = x / 2^3
print(x, left_shift, right_shift)

def main():
    print("This is from main method")

if __name__ == "__main__":
    main()
    