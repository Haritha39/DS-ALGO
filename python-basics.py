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

    # LIST
    list_item = ['orange', 123, True, 1, 'hello', 123]
    list_item[-1] = 456
    print(list_item)
    print(type(list_item))
    new_list = list(('h','e'))
    print(new_list)
    print("length of list", len(new_list))

    #TUPLE
    tuple_item = ("hello", 123, 123)
    print(tuple_item, type(tuple_item))

    # SET
    set_item = set(('hey', 'bro', True, 1))
    print(set_item, type(set_item)) # {'hey', True,'bro'}
    set_item.add('baby')
    print(set_item)
    set_item.update(tuple_item)
    set_item.update(new_list)
    print(set_item)
    set_item_union = set_item.union(list_item)
    print(set_item_union)
    set_item_union.intersection_update(new_list)
    print(set_item_union)
    x = {1,2,3}
    y={4,5,6, 1, 2,3}
    z = x.symmetric_difference(y)
    print(z)

    #DICTIONARIES
    dict_item = {"a": "hello", "b": "baby", "c": 123}
    print(dict_item, type(dict_item))
    print(dict_item["c"])
    print(dict_item.keys(), dict_item.values())
    for g in dict_item:
        print(g, dict_item[g])
    for k,v in dict_item.items():
        print(k,v)


def checkLambda(n):
    print('n', n)
    return lambda a: a*n
result = checkLambda(2)
print('>>>> result ',result(1))
print('>>>> result ',result(2))
print('>>>> result ',result(3))
print('>>>> result ',result(4))
print('>>>> result ',result(5))
print('>>>> result ',result(6))

class pythonClass:
    def __init__(self, height, width):
        self.height = height
        self.width = width
obj = pythonClass(100, 50)
print('----------object' , obj.height)
obj.height = 40
print('----------object' , obj.height)

if __name__ == "__main__":
    main()

    